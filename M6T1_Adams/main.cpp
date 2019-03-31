#include <iostream>
#include "observer.h"
using namespace std;

int main()
{
  Dog Fido;
  Police TJHooker("TJ");
  Police JoeFriday("Joe");
  Subject Alarm;
  Subject Donuts;
  Alarm.AddObserver(&Fido);
  Donuts.AddObserver(&TJHooker);
  Alarm.AddObserver(&JoeFriday);
  //Alarm.RemoveObserver(&JoeFriday);
  Alarm.Event();
  //Donuts.Event();


    return 0;
}
