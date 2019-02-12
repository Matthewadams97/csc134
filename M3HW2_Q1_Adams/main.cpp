// CSC 134
// M3HW2
// Matthew Adams
// 2/17/2019
#include <iostream>

using namespace std;

void savedWaterBottles (){
    float bottleSize;
    float plasticBottleSize;
    float numberOfBottlesSaved;
    float numberOfOunces;
    plasticBottleSize = 16;
    int waterBottles = 1;
        waterBottles;
    cout << "Please enter how large your water bottles is in ounces." << endl;
    cin >> bottleSize;

    numberOfBottlesSaved = bottleSize/plasticBottleSize;
    cout << "You have saved " << numberOfBottlesSaved << " water bottles by using this water station." << endl;
}


int main()
{
    cout << "Hello world!" << endl;
    savedWaterBottles();
    return 0;
}
