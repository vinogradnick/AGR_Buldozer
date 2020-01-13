add_executable(${PROJECT_NAME}_Server  server.cpp)
target_link_libraries(${PROJECT_NAME}_Server PUBLIC Requests)
target_link_libraries(${PROJECT_NAME}_Server PUBLIC yaml-cpp)
