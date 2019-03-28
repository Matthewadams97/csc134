#include <iostream>
#include "observer.h"
using namespace std;

void Dog::Respond()
{
    cout << "Bark Bark" << endl;
}

void Police::Respond()
{
    cout << name << ": Drop the weapon! Now!" << endl;
}

void Subject::AddObserver(Observer *Item)
{
    List [count] = Item;
    count ++;
}
void Subject:: removeObserver(Observer *Item)
{
    int i;
    bool found = false;
    for (i=0; i< count; i++){
    {
    }
    else if (List[i] == Item){
        found = true;
        List[i] = List[i+1];
    }
    }
    if (found)
    {
        count--;
    }
}

void Subject::Event()
{
    int i;
    for (i=0; i< count; i++)
    {
        List[i]->Respond();
    }
}
