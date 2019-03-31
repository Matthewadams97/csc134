#ifndef OBSERVER_H_INCLUDED
#define OBSERVER_H_INCLUDED
using namespace std;



class Observer
{
public:
    virtual void Respond() = 0;
};


class Dog : public Observer
{
public:
    void Respond();
};


class Police : public Observer
{
protected:
    string name;
public:
    Police(string myname) {name = myname; }
    void Respond();
};


class Subject
{
protected:
    int count;
    Observer *List[100];
public:
    Subject(){ count = 0;}
    void AddObserver(Observer *Item);
    void RemoveObserver(Observer *Item);
    void Event();
};



#endif // OBSERVER_H_INCLUDED
