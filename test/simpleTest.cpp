#include <tamagochi/tamagochi.h>
#include <iostream>
#include <gtest/gtest.h>
//
// Created by ovalle on 12/9/2021.
//
TEST( TamagochiTests, TestCreate ) {
    Tamagochi tamagochi;
    ASSERT_TRUE(tamagochi.isHappy());
}