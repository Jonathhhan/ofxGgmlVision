cmake_minimum_required(VERSION 3.18)
project(ofxGgmlVision_tests CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ofxGgmlVision_tests
	test_main.cpp
	../src/ofxGgmlVision/ofxGgmlVisionUtils.cpp)

target_include_directories(ofxGgmlVision_tests PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/../src)

enable_testing()
add_test(NAME ofxGgmlVision_tests COMMAND ofxGgmlVision_tests)