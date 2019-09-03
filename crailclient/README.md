# C++ client for Crail/Pocket

This branch adds support to compile the C++ client using Boost.python for use by the Pocket python client library. 

```
sudo apt-get install -y cmake libboost-all-dev python-dev
mkdir build
cd build
cmake ..
make
```

You will need the libpocket.so and libcppcrail.so files in the same directory as the python wrapper code ([pocket.py](https://github.com/zrlio/crail-dispatcher/tree/master/python-client/pocket.py))

