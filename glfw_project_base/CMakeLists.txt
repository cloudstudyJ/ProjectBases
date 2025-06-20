cmake_minimum_required(VERSION 3.11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR})

project(YOUR PROJECT NAME HERE)

file(
    GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/includes
)

add_executable(
    ${PROJECT_NAME}

    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${SRC_FILES}
)

target_link_libraries(
    ${PROJECT_NAME}

    PRIVATE
        "-lopengl32"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/binaries/glfw/libglfw3dll.a"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/binaries/glew/glew32.lib"
)