set(TAMAGOCHI_HPP
        ../include/tamagochi/tamagochi.h
)
set(TAMAGOCHI_CPP
        tamagochi/tamagochi.cpp)
add_library(tamagochi ${TAMAGOCHI_HPP} ${TAMAGOCHI_CPP})
target_include_directories( tamagochi PUBLIC ../include)