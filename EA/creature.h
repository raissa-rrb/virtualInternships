#include <string>
/*
This class describes the Creature Object
A creature can move around, make a sound and hold an object that it can wave around.

Different kinds of creatures exist : alien/ghost/death
Each one has a particular way to move, make a sound or shake the object it's handling

Ideally we would have 3 more classes inhereiting from Creature, so like an alien class containing the right methods etc ...
*/

//!!! Movement is an abstract class, we can't have a Movement object, it's more like a concept from which actual movements exist
class Movement {

    public:

    Movement()=default;
    virtual ~Movement() = default;

    virtual void move() = 0;

};

class Fly : public Movement {

    public:

    Fly()=default;
    ~Fly()=default;

    void move();
};

class Walk : public Movement {

    public:

    Walk()=default;
    ~Walk()=default;

    void move();
};

class Hover : public Movement {

    public:

    Hover()=default;
    ~Hover()=default;

    void move();
};

//!!! Sound

class Sound {

    public : 
    Sound()=default;
    virtual ~Sound()=default;

    virtual void speak()=0;
};

class ScaryLaugh : public Sound{

    public : 
    ScaryLaugh()=default;
    ~ScaryLaugh()=default;

    void speak();
};

class AlienVoice : public Sound{

    public : 
    AlienVoice()=default;
    ~AlienVoice()=default;

    void speak();
};

class HumanLament : public Sound{

    public : 
    HumanLament()=default;
    ~HumanLament()=default;

    void speak();
};

//!! Object
class Object {

    public : 
    Object()=default;
    virtual ~Object()=default;

    virtual void shake() = 0;
   // void drop();
};

class Key : public Object{

    public: 
    Key()=default;
    ~Key()=default;

    void shake();
};
class Hands : public Object{

    public: 
    Hands()=default;
    ~Hands()=default;

    void shake();
};
class Scythe : public Object{

    public: 
    Scythe()=default;
    ~Scythe()=default;

    void shake();
};

class Creature {

    //all attributes are private until i specify it's public

    std::string name_; //the name should start w/ a_, g_ or d_ regarding the creature's type
    Movement *movement_;
    Sound *sound_;
    Object *object_;

    public : 
    
    Creature(std::string name, Movement* movement, Sound* sound, Object* object);
    Creature(std::string name);

    ~Creature();

    void setMovement(Movement* movement);
    void setSound(Sound* sound);
    void setObject(Object* object);

    void move();
    void speak();
    void shake();

    void printCreature();
};