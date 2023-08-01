#include <string>
#include <chrono>
#include <thread>
#include <memory>
#include <iostream>

#include "../../header/ylm_client.h"
#include "../../header/ylm_data_types.h"
#include "../../src/ylm_client.cpp"

int getFrame(std::string IP, int port)
{
	int ret = pollNetworkForFrame(IP, port);

	if (ret < 0) // No data coming through the network
		return ret;

	// At this point we are guaranteed that the previous call was a success
	// Retrieve the frame data using the available shared_ptrs
	auto metadataPtr = get_metadata_frame();
	auto rangePtr = get_range_frame();
	auto intensityPtr = get_intensity_frame();

	std::cout << "Got a Lidar Frame!" << std::endl;

	// Do something with the underlying data (see lumotive_data_types.h to view the structs)
	
	return ret;
}

int main() {

	std::string sensor_IP = "192.168.0.10";
	int sensor_port = 10940;

	while (true) {
		int ret = getFrame(sensor_IP, sensor_port);
		if (ret < 0) // If no data coming through, sleep to prevent needless resource consumption
			std::cout << "No connection found to YLM." << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}