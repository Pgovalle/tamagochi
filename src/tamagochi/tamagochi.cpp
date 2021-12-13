//
// Created by ovalle on 12/9/2021.
//
#include "tamagochi/tamagochi.h"
void State::changeState(State *aState) {pTamagochi->setState(aState); }
void Hungry::giveFood() {this->changeState(new Happy()); }
void Happy::doSport() {this->changeState( new Sleepy()); }
void Sleepy::sleep() {this->changeState( new Hungry()); }
void Tamagochi::setState(State *a_pState) {
    free(pState);
    pState = a_pState;
}


