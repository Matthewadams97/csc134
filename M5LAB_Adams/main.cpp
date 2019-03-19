//CSC 134
// Matthew Adams
// M5LAB
// 3/19/2019

#include <iostream>

using namespace std;

int main()
{
    const int NUM_ROOMS = 8;
    string names [NUM_ROOMS];
    string description [NUM_ROOMS];
    string exits [NUM_ROOMS];

    names[0] = "My bedroom";
    description[0] = "This is my bedroom. There is a desk with my car keys on it.";
    exits[0] = "west";

    names[1] = "The Upstairs Hallway";
    description[1] = "This is the upstairs hallway, there are stairs to the west.";
    exits[1] = "south, east";

    names[2] = "The stairs";
    description[2] = "You are on the stairs, continuing down the stairs leads to a hallway downstairs or you can go back upstairs.";
    exits[2] = "south, north";

    names[3] = "Downstairs Hallway";
    description[3] = "You are in the downstairs hallway, you can go to the north into the kitchen, east to the dining room, or the west to the living room. or back to the stairs.";
    exits[3] = "south, north, east, west";

    names[4] = "The kitchen";
    description[4] = "This is the kitchen, food in the fridge, dishes are done. You can only go back into the downstairs hallway.";
    exits[4] = "south";

    names[5] = "The dining room";
    description[5] = "This is dining room, the table looks recently polished. You can only go back to the downstairs hallway from here.";
    exits[5] = "west";

    names[6] = "The living room";
    description[6] = "This living room, the TV is off, and it seems you are home alone. You can go back to the downstairs hallway to the east, or go outside through the front door to the north.";
    exits[6] = "north, east";

    names[7] = "Front Lawn";
    description[7] = "This is the front lawn, My car is in the drive way and it is time to leave for class.";
    exits[7] = "north";

    for (int i = 0; i < NUM_ROOMS; i++){
        cout << "The name of the room is " << names[i] << endl;
        cout << description[i] << endl;
        cout << "the Exits are " << exits[i] << endl;
        cout << "" << endl;


    }

    return 0;
}
