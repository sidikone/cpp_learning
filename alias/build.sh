#!/bin/bash

clear
cd build
rm -r *
cmake ..
make

mv VarApps ../.
cd ..
./VarApps
