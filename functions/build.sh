#!/bin/bash

clear
cd build
rm -r *
cmake ..
make

mv varApps ../.
cd ..
./varApps
