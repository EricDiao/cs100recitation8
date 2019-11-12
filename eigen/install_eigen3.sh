#!/usr/bin/env bash
set -e
cd /tmp
curl -sSL http://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz -sSL | tar -zxf -
cd eigen-eigen-*
mkdir build
cd build
cmake ..
make
make install
