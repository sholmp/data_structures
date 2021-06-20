link_directories(/home/sholmp/repos/googletest/build/lib)
include_directories(${CMAKE_SOURCE_DIR}/src/lib)

add_executable(test_trie test_trie.cpp)

target_link_libraries(test_trie PUBLIC data_structures gtest gtest_main pthread)
