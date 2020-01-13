add_library(Requests src/Requests/RequestProtocol.h src/Requests/RequestProtocol.cpp)
target_include_directories(Requests PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
add_subdirectory(apps/server)
