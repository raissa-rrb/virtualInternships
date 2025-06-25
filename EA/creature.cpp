#include "creature.h"
#include <iostream>

//movements


void Fly::move() {
    //in the game this would create a special flying animation
    //here we'll have a print
    std::cout << "fly away" << std::endl;
}

void Walk::move(){
    std::cout << "walk away" << std::endl;
}

void Hover::move(){
    std::cout << "hover away" << std::endl;
}

//Sounds
void ScaryLaugh::speak() {
    std::cout << "mmmmuahaha the end is close..." << std::endl;
}

void AlienVoice::speak() {
    std::cout << "bipip ip...zibibibid" << std::endl;
}

void HumanLament::speak() {
    std::cout << "bouhouhou i'm dead ! bouhouhou" << std::endl;
}

//Objects

void Key::shake() {
    std::cout <<"bibiipip spaceship keys ipipibid" << std::endl;
}

void Hands::shake() {
    std::cout << "*hand wave* can't you see me ??! *hand wave*" <<std::endl;
}

void Scythe::shake() {
    std::cout << "your time has come.. *waves scythe*"<< std::endl;
}

//Creature
Creature::Creature(std::string name):name_(name){
    object_=nullptr;
    movement_=nullptr;
    sound_=nullptr;
}

Creature::Creature(std::string name, Movement* movement, Sound *sound, Object* object)
                    : name_(name), movement_(movement), sound_(sound), object_(object)
                    {}

Creature::~Creature(){}

void Creature::setMovement(Movement* movement) {
    movement_ = movement;
}

void Creature::setSound(Sound* sound) {
    sound_ = sound;
}

void Creature::setObject(Object *object) {
    object_ = object;
}

void Creature::printCreature() {
    std::cout << "hey my name is " << name_ << std::endl;
}

void Creature::move(){
    if(movement_)
        movement_->move();
    else   
        std::cout << name_ << " says :cannot move.."<<std::endl;
}

void Creature::speak(){
    if(sound_)
        sound_->speak();
    else 
        std::cout <<name_ << " says : ..." << std::endl;
}

void Creature::shake(){
    if(object_)
        object_->shake();
    else
        std::cout << name_ << " says : no object in hand.." << std::endl;
}
