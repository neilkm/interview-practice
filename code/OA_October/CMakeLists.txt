# CMake for OA_October directory

# Create a static library for this module
add_library(OA_October
    FindMissing/find_missing.cpp
)

# Public include directories for headers
target_include_directories(OA_October PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/FindMissing
)

# Test executable for OA_October
add_executable(OA_October_tst main.cpp)

# Link test executable to this module's library
target_link_libraries(OA_October_tst PRIVATE OA_October)

