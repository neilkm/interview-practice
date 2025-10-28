# CMake for shared solution class to be inherited by all cpp problems

# Create a static library for this module
add_library(Solution
    solution.cpp
)

# Public include directories for headers
target_include_directories(Solution PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Test executable for OA_October
add_executable(Solution solution.cpp)

# Link test executable to this module's library
target_link_libraries(Solution PRIVATE Solution)

