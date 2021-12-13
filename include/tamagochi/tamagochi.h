//
// Created by ovalle on 12/9/2021.
//
#include <iostream>
class Tamagochi;
class State;

class State {
private:
    Tamagochi *pTamagochi;
public:
    void setTamagochi(Tamagochi *a_pTamagochi ) { pTamagochi = a_pTamagochi ;}
    void changeState( State *aState );
    void error() {throw std::invalid_argument( "invalid state"); }
    virtual void doSport() { error(); }
    virtual void sleep() { error(); }
    virtual void giveFood() { error(); }
    virtual bool isHungry() { return false; }
    virtual bool isHappy() { return false; }
    virtual bool isSleppy() { return false; }
};

class Hungry : public State {
public:
    virtual void giveFood();
    virtual bool isHungry() { return true; }
};

class Happy : public State {
public:
    virtual void doSport();
    virtual bool isHappy() { return true; }
};

class Sleepy : public State {
public:
    virtual void sleep();
    virtual bool isSleepy() { return true; }
};

class Tamagochi {
private:
    State *pState;
public:
    Tamagochi() {this->setState(new Happy()) ;}
    void setState(State *a_pState);
    void doSport() { pState->doSport(); }
    void sleep() { pState->sleep(); }
    void giveFood() { pState->giveFood(); }
    bool isHungry() { return pState->isHungry(); }
    bool isHappy() { return pState->isHappy(); }
    bool isSleppy() { return pState->isSleppy(); }
};
