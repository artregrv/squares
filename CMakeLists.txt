cmake_minimum_required(VERSION 3.16)

project(squares VERSION 0.1.0)

set(CMAKE_AUTOMOC ON)

file(GLOB HEADERS "*.h")
file(GLOB SOURCE "*.cpp")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCE})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
