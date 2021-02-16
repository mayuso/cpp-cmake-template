project(lib2_tests)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        libs::lib2
)

add_test(lib2_tests ${PROJECT_NAME})