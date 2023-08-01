C++ wrapper for Stream Receiver
=========================================

This folder contains a thin C++ wrapper to demonstrate how to interface the stream receiver library.

Build instructions
-------------------
You need CMake and the Boost library to build.

**Install dependencies for Ubuntu:**
```
sudo apt-get install libboost-all-dev
sudo apt-get install build-essential
sudo apt-get install cmake
```

Before building, open up main.cpp and change the sensor_IP and sensor_port field to make sure they match what you expect.

**Build for Linux:**
```
cd cpp_client
mkdir build
cd build
cmake ..
make
```

**Build for Windows:**
```
cd cpp_client
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

Usage instructions
-------------------
Run the built cpp_client binary.