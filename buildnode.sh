#!/bin/bash
./autogen.sh
./configure --with-incompatible-bdb
make
make check
mkdir ~/.blackhat
echo "rpcuser=foo" > ~/.blackhat/blackhat.conf
echo "rpcpassword=bar" >> ~/.blackhat/blackhat.conf
cd src
./blackhatd -daemon
./blackhat-cli getinfo
