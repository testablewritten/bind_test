cmake_minimum_required(VERSION 3.14)
find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(test.out bind_test.cpp)

target_link_libraries(test.out ${Boost_LIBRARIES})
