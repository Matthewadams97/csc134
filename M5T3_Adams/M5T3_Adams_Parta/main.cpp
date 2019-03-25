/*CSC 134
M5T3
Matthew Adams
03/14/2019*/
#include <iostream>

using namespace std;

class Cat{
public:
    string name;
};

class Dog{
public:
    string name;
};
class Human{
public:
    string name;
};
class Door{
private:
    int HowManyInside;
public:
    void Start ();
    void goThrough(Cat *acat);
    void goThrough(Dog *adog);
    void goThrough(Human *ahuman);
};
void Door:: Start(){
HowManyInside = 0;
}
void Door::goThrough(Cat *somebody){
cout << "Welcome, " << somebody->name << endl;
cout << "A cat just entered!" << endl;
HowManyInside++;
}
void Door::goThrough(Dog *somebody){
cout << "Welcome, " << somebody->name << endl;
cout << "A dog just entered!" << endl;
HowManyInside++;
}
void Door::goThrough(Human *somebody){
cout << "Welcome, " << somebody->name << endl;
cout << "A human just entered!" << endl;
HowManyInside++;
}


int main()
{
    Door entrance;
    entrance.Start();
    Cat *Sneekygirl = new Cat;
    Sneekygirl->name = "Sneeky Girl";
    Dog *LittleGeorge = new Dog;
    LittleGeorge->name = "Little George";
    Human *me  = new Human;
    me->name = "Jeff";
    entrance.goThrough(Sneekygirl);
    entrance.goThrough(LittleGeorge);
    entrance.goThrough(me);
    delete Sneekygirl;
    delete LittleGeorge;
    delete me;
    return 0;
}
