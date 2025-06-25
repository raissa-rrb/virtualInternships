#include "creature.h"
#include <iostream>

using namespace std;

int main(){
    Creature alien0("a_alien0");
    Creature ghost0("g_ghost0");

    alien0.printCreature();
    ghost0.printCreature();

    alien0.move();
    alien0.speak();
    alien0.shake();

    ghost0.move();
    ghost0.speak();
    ghost0.shake();

    cout << endl;

    cout << "after setters" << endl;
    Key *key0 = new Key();
    Hands *hands0 = new Hands();

    AlienVoice * alienVoice0 = new AlienVoice();
    HumanLament * humanLament0 = new HumanLament();
    
    Hover *hover0 = new Hover();
    Fly *fly0 = new Fly();

    alien0.setObject(key0);
    alien0.setMovement(fly0);
    alien0.setSound(alienVoice0);

    ghost0.setMovement(hover0);
    ghost0.setObject(hands0);
    ghost0.setSound(humanLament0);

    alien0.move();
    alien0.speak();
    alien0.shake();

    cout << endl;

    ghost0.move();
    ghost0.speak();
    ghost0.shake();


}