#include <iostream>
#include "observer.h"
using namespace std;

int main()
{
    Subject Alarm;

    Police *TJHoooker = new Police(&Alarm, "TJ");
    cout << "TJ on the beat" << endl;
    Alarm.Event();
    cout << endl;
    cout << "TJ off for the day" << endl;
    delete TJHoooker;
    Alarm.Event();




    return 0;
}
