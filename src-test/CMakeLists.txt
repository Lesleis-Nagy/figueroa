add_executable(test_linalg test_linalg.cpp)

target_include_directories(test_linalg
    PRIVATE ${FIGUEROA_INCLUDE_DIR}
            ${FIGUEROA_CATCH_INCLUDE_DIR}
)
