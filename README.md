YLM Communication Sample
==============================

[日本語](./README_ja.md)

Description
-------------------

This is a sample source to communicate the YLM series sensor in C++.\
It outputs "Got a Lidar Frame!" when it receives data from YLM.

How to build
-------------------
You will need CMake and the Boost library to build this project.\
Execute the following commands:
```
cd sample/CMake
cmake -S . -B build
cmake --build build --config Release
```

How to communicate with YLM
--------------------
1. Change IP address\
    The default IP address for the YLM is 192.168.0.10.\
    Please ensure that the device's IP address is set to another address within the 192.168.0.* range, but not to 192.168.0.10.

2. Access the Web UI\
   Open a browser and navigate to http://192.168.0.10.

3. Start scan.\
   Click "Start Scan" button.

4. Execute this project.
   The program outputs "Got a Lidar Frame!" on receiving data.