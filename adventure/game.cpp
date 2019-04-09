#include "game.h"

Game::Game()
{
//create game object
vector<Room*> rooms(NUM_ROOMS);
this->rooms = rooms;

}





Game::~Game()
{
    //destructor
}




void Game::startGame()
{
    cout << "starting game" << endl;

     Room* a = new Room("My bedroom","This is my bedroom. There is a desk with my car keys on it.");
    Room* b = new Room("The Upstairs Hallway","This is the upstairs hallway, there are stairs to the west.");
    Room* c = new Room("The stairs","You are on the stairs, continuing down the stairs leads to a hallway downstairs or you can go back upstairs.");
    Room* d = new Room("Downstairs Hallway","You are in the downstairs hallway, you can go to the north into the kitchen, east to the dining room, or the west to the living room. or back to the stairs.");
    Room* e = new Room("The kitchen","This is the kitchen, food in the fridge, dishes are done. You can only go back into the downstairs hallway,");
    Room* f = new Room("The dining room","This is dining room, the table looks recently polished. You can only go back to the downstairs hallway from here.");
    Room* g = new Room("The living room","This living room, the TV is off, and it seems you are home alone. You can go back to the downstairs hallway to the east, or go outside through the front door to the north.");
    Room* h = new Room("Front Lawn","This is the front lawn, My car is in the drive way and it is time to leave for class.");
    a->west = b;

    b->east = a;
    b->west = c;

    c->east = b;
    c->west= d;
    d->east = c;
    c->west = d;
    d->north = e;

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


    /*cout << "" << endl;
    cout << "... headed east..." << endl;
    myLocation = myLocation->east;
    cout << myLocation->printInfo();
    cout << "" << endl;*/


    cout << "done." << endl;



}



void Game::gameOver()
{
    cout << "game is over" << endl;
}
