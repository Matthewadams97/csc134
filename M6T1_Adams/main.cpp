#include <iostream>
#include <vector>
#include <string>

#include "room.h"

using namespace std;

void testRooms() {
    // test of stringing together two rooms
    Room* a = new Room("My bedroom","This is my bedroom. There is a desk with my car keys on it.");
    Room* b = new Room("The Upstairs Hallway","This is the upstairs hallway, there are stairs to the west.");
    Room* c = new Room("The stairs","You are on the stairs, continuing down the stairs leads to a hallway downstairs or you can go back upstairs.");
    Room* d = new Room("Downstairs Hallway","You are in the downstairs hallway, you can go to the north into the kitchen, east to the dining room, or the west to the living room. or back to the stairs.");
    Room* e = new Room("The kitchen","This is the kitchen, food in the fridge, dishes are done. You can only go back into the downstairs hallway,");
    Room* f = new Room("The dining room","This is dining room, the table looks recently polished. You can only go back to the downstairs hallway from here.");
    Room* g = new Room("The living room","This living room, the TV is off, and it seems you are home alone. You can go back to the downstairs hallway to the east, or go outside through the front door to the north.");
    Room* h = new Room("Front Lawn","This is the front lawn, My car is in the drive way and it is time to leave for class.");
    a->west = b;

    b->east  = a;
    b->west  = c;

    c->east  = b;
    c->west  = d;
    d->east  = c;
    c->west  = d;
    d->north = e;
    e->south = d;

    // going for a walk
    Room* myLocation = a;

    cout << myLocation->printInfo();


    cout << "" << endl;
    cout << "...headed west..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "...headed east..." << endl;
    myLocation = myLocation->east;
    cout << myLocation->printInfo();
    cout << "" << endl;


    cout << "" << endl;
    cout << "... headed west ..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;


    cout << "" << endl;
    cout << "... headed west..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "... headed east..." << endl;
    myLocation = myLocation->east;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "... headed east..." << endl;
    myLocation = myLocation->east;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "... headed west..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;


    cout << "" << endl;
    cout << "... headed west..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "... headed west..." << endl;
    myLocation = myLocation->west;
    cout << myLocation->printInfo();
    cout << "" << endl;

    cout << "" << endl;
    cout << "... headed north..." << endl;
    myLocation = myLocation->north;
    cout << myLocation->printInfo();
    cout << "" << endl;


    cout << "" << endl;
    cout << "... headed south..." << endl;
    myLocation = myLocation->south;
    cout << myLocation->printInfo();
    cout << "" << endl;


    cout << "done." << endl;

}


void testVector() {
    const int NUM_ROOMS = 8;
    string names[] = {"My bedroom",
                        "The Upstairs Hallway",
                        "The stairs",
                        "Downstairs Hallway",
                        "The kitchen",
                        "The dining room",
                        "The living room",
                        "Front Lawn"};
    string description [] = {"This is my bedroom. There is a desk with my car keys on it.",
                            "This is the upstairs hallway, there are stairs to the west.",
                            "You are on the stairs, continuing down the stairs leads to a hallway downstairs or you can go back upstairs.",
                            "You are in the downstairs hallway, you can go to the north into the kitchen, east to the dining room, or the west to the living room. or back to the stairs.",
                            "This is the kitchen, food in the fridge, dishes are done. You can only go back into the downstairs hallway.",
                            "This is dining room, the table looks recently polished. You can only go back to the downstairs hallway from here.",
                            "This living room, the TV is off, and it seems you are home alone. You can go back to the downstairs hallway to the east, or go outside through the front door to the north.",
                            "This is the front lawn, My car is in the drive way and it is time to leave for class."
                            };
    // a vector works very similiar to an array
    // we'll get into the differences later
    vector<Room*> rooms(NUM_ROOMS);

    // now we have a vector of 4 blank rooms.
    // let's configure it with our names and descriptions
    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = description[i];
    }

    // list all rooms
    for (int i=0; i < NUM_ROOMS; i++) {
        cout << "" << endl;
        cout << "Next room:" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << rooms[i]->printInfo();

    }

}



void runTests() {
    /*
    This code gives two separate examples
    1. Create two rooms and use a Room pointer
    to keep the player's current location,
    then move between rooms

    2. Create a vector containing room pointers,
    and create rooms with names and descriptions
    for each pointer
    */

    cout << "Testing room walk" << endl;
    testRooms();
    cout << "-------------------" << endl;
    //cout << "Testing room creation" << endl;
    //testVector();
}

int main()
{
    runTests();
    return 0;
}
