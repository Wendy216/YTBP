
# YTAChain

[![Build status](https://badge.buildkite.com/370fe5c79410f7d695e4e34c500b4e86e3ac021c6b1f739e20.svg?branch=master)](https://buildkite.com/EOSIO/eosio)

Welcome to the EOSIO source code repository! This software enables businesses to rapidly build and deploy high-performance and high-security blockchain-based applications.

Some of the groundbreaking features of EOSIO include:

1. Free Rate Limited Transactions 
1. Low Latency Block confirmation (0.5 seconds)
1. Low-overhead Byzantine Fault Tolerant Finality
1. Designed for optional high-overhead, low-latency BFT finality 
1. Smart contract platform powered by Web Assembly
1. Designed for Sparse Header Light Client Validation
1. Scheduled Recurring Transactions 
1. Time Delay Security
1. Hierarchical Role Based Permissions
1. Support for Biometric Hardware Secured Keys (e.g. Apple Secure Enclave)
1. Designed for Parallel Execution of Context Free Validation Logic
1. Designed for Inter Blockchain Communication 

There is no public testnet running currently.

**If you have previously installed EOSIO, please run the `eosio_uninstall` script (it is in the directory where you cloned EOSIO) before downloading and using the binary releases.**

#### Mac OS X Brew Install
```sh
$ brew tap eosio/eosio
$ brew install eosio
```
#### Mac OS X Brew Uninstall
```sh
$ brew remove eosio
```
#### Ubuntu 18.04 Debian Package Install
```sh
$ wget https://github.com/eosio/eos/releases/download/v1.6.3/eosio_1.6.3-1-ubuntu-18.04_amd64.deb
$ sudo apt install ./eosio_1.6.3-1-ubuntu-18.04_amd64.deb
```
#### Ubuntu 16.04 Debian Package Install
```sh
$ wget https://github.com/eosio/eos/releases/download/v1.6.3/eosio_1.6.3-1-ubuntu-16.04_amd64.deb
$ sudo apt install ./eosio_1.6.3-1-ubuntu-16.04_amd64.deb
```
#### Debian Package Uninstall
```sh
$ sudo apt remove eosio
```
#### Centos RPM Package Install
```sh
$ wget https://github.com/eosio/eos/releases/download/v1.6.3/eosio-1.6.3-1.el7.x86_64.rpm
$ sudo yum install ./eosio-1.6.3-1.el7.x86_64.rpm
```
#### Centos RPM Package Uninstall
```sh
$ sudo yum remove eosio.cdt
```
#### Fedora RPM Package Install
```sh
$ wget https://github.com/eosio/eos/releases/download/v1.6.3/eosio-1.6.3-1.fc27.x86_64.rpm
$ sudo yum install ./eosio-1.6.3-1.fc27.x86_64.rpm
```
#### Fedora RPM Package Uninstall
```sh
$ sudo yum remove eosio.cdt
```

## Supported Operating Systems
EOSIO currently supports the following operating systems:  
1. Amazon 2017.09 and higher
2. Centos 7
3. Fedora 25 and higher (Fedora 27 recommended)
4. Mint 18
5. Ubuntu 16.04 (Ubuntu 16.10 recommended)
6. Ubuntu 18.04
7. MacOS Darwin 10.12 and higher (MacOS 10.13.x recommended)

## Resources
1. [Website](https://eos.io)
1. [Blog](https://medium.com/eosio)
1. [Developer Portal](https://developers.eos.io)
1. [StackExchange for Q&A](https://eosio.stackexchange.com/)
1. [Community Telegram Group](https://t.me/EOSProject)
1. [Developer Telegram Group](https://t.me/joinchat/EaEnSUPktgfoI-XPfMYtcQ)
1. [White Paper](https://github.com/EOSIO/Documentation/blob/master/TechnicalWhitePaper.md)
1. [Roadmap](https://github.com/EOSIO/Documentation/blob/master/Roadmap.md)

<a name="gettingstarted"></a>
## Getting Started
Instructions detailing the process of getting the software, building it, running a simple test network that produces blocks, account creation and uploading a sample contract to the blockchain can be found in [Getting Started](https://developers.eos.io/eosio-home/docs) on the [EOSIO Developer Portal](https://developers.eos.io).
