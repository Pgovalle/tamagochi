add_executable(
        TamagochiTests
        simpleTest.cpp
)

target_link_libraries(
        TamagochiTests
        gtest_main
        tamagochi
)

include(GoogleTest)
gtest_discover_tests(TamagochiTests)