cmake_minimum_required(VERSION 3.0.0)
project(sample VERSION 0.1)

file(GLOB_RECURSE SRC ${PROJECT_SOURCE_DIR}/src/*)

add_executable(sample ${SRC})

target_include_directories(sample PUBLIC
    include
)

#OpenGL
find_package(OpenGL REQUIRED)

#glfw
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)
target_link_libraries(sample PRIVATE glfw)

#glm
add_subdirectory(lib/glm EXCLUDE_FROM_ALL)
target_link_libraries(sample PRIVATE glm)

file(COPY ${PROJECT_SOURCE_DIR}/assets DESTINATION ${PROJECT_BINARY_DIR})
