cmake_minimum_required(VERSION 3.24)
project(dynamic_code_analyzer)

set(CMAKE_CXX_STANDARD 17)

add_executable(dynamic_code_analyzer src/main.cpp src/analyzer/Analyzer.cpp src/analyzer/Analyzer.h src/analyzer/Parser.cpp src/analyzer/Parser.h src/analyzer/Metrices.cpp src/analyzer/Metrices.h src/utiles/Logger.cpp src/utiles/Logger.h src/utiles/FileManager.cpp src/utiles/FileManager.h src/include/Parser.h src/include/Analyzer.h src/include/Metrices.h src/tests/test_analyzer.cpp src/tests/test_parser.cpp src/tests/test_metrices.cpp)
