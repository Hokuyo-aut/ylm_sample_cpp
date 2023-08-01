cmake_minimum_required(VERSION 3.10)

project(ylm_cpp_client)

find_package(Boost)

if (Boost_FOUND)

  set(ylm_INCLUDE_DIRS "../../header;")
  include_directories(${ylm_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})

  add_library(ylm_client STATIC ../../src/ylm_client.cpp)
  target_link_libraries(ylm_client ${Boost_LIBRARIES})

  add_executable(cpp_client main.cpp)
  target_link_libraries(cpp_client ylm_client)
  add_dependencies(cpp_client ylm_client)

else()

message("Boost not found.")

endif()