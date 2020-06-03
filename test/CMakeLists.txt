add_executable(test_state test_state.c)
add_dependencies(test_state test_state cmocka)
add_test(test_state test_state)
target_link_libraries(test_state state cmocka)