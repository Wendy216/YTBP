#include <eosiolib/eosio.hpp>
#include <eosiolib/asset.hpp>
#include <eosiolib/singleton.hpp>
#include <eosiolib/symbol.hpp>

#include <string>


using eosio::name;
using eosio::asset;
using eosio::multi_index;
using eosio::indexed_by;
using eosio::const_mem_fun;


class hddlock : public eosio::contract {
    
    public:
        using contract::contract;

        void init();
        void addrule(uint64_t lockruleid, std::vector<uint64_t>& times, std::vector<uint8_t>& percentage, std::string& desc);
        void locktransfer(uint64_t lockruleid, account_name from, account_name to, asset quantity, std::string memo);

        inline asset get_lock_asset( account_name user )const;

    private:

        struct lockrule {
            uint64_t                lockruleid;
            std::vector<uint64_t>   times;
            std::vector<uint8_t>    percentage;
            std::string             desc;
            uint64_t    primary_key()const { return lockruleid; }
        };
        typedef multi_index<N(lockrule), lockrule> lockrule_table; 

        struct acclock {
            asset           quantity;
            uint64_t        lockruleid;        
            account_name    user;
            account_name    from;
            std::string     memo;
            uint64_t        time;
            uint64_t    primary_key()const { return time; }
        };
        typedef multi_index<N(acclock), acclock> acclock_table; 

};


asset hddlock::get_lock_asset( account_name user ) const
{
    acclock_table _acclock(_self, user);
    asset lockasset{0, CORE_SYMBOL};

    uint64_t curtime = current_time()/1000000ll; //seconds
    for(auto it = _acclock.begin(); it != _acclock.end(); it++) {
        int64_t amount = it->quantity.amount;
        uint8_t percent = 0;
        size_t n = 0;
        lockrule_table _lockrule(_self, _self);
        auto itrule = _lockrule.find(it->lockruleid);
        eosio_assert(itrule != _lockrule.end(), "lockruleid not existed in rule table");          
        for(auto itt = itrule->times.begin(); itt != itrule->times.end(); itt++) {
            if(*itt > curtime ) {
                break;
            }
            percent = itrule->percentage[n];
            n++; 
        }
        eosio_assert(percent>=0 && percent<=100, "invalidate lock percentage");          
        percent = 100 - percent;
        lockasset.amount += (amount * percent)/100;
    }
    return lockasset;
}
