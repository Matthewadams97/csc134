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

    /*Room* a = new Room("My bedroom","This is my bedroom. There is a desk with my car keys on it.");
    Room* b = new Room("The Upstairs Hallway","This is the upstairs hallway, there are stairs to the west.");
    Room* c = new Room("The stairs","You are on the stairs, continuing down the stairs leads to a hallway downstairs or you can go back upstairs.");
    Room* d = new Room("Downstairs Hallway","You are in the downstairs hallway, you can go to the north into the kitchen, east to the dining room, or the west to the living room. or back to the stairs.");
    Room* e = new Room("The kitchen","This is the kitchen, food in the fridge, dishes are done. You can only go back into the downstairs hallway,");
    Room* f = new Room("The dining room","This is dining room, the table looks recently polished. You can only go back to the downstairs hallway from here.");
    Room* g = new Room("The living room","This living room, the TV is off, and it seems you are home alone. You can go back to the downstairs hallway to the east, or go outside through the front door to the north.");
    Room* h = new Room("Front Lawn","This is the front lawn, My car is in the drive way and it is time to leave for class.");
    */

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

    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = description[i];
    }


    rooms[0]->west = rooms[1];
    rooms[1]->east = rooms[0];

/*    b->west = c;
    c->east = b;
    c->west= d;
    d->east = c;
    c->west = d;
    d->north = e;
*/

    // going for a walk
    player.location = rooms[0];

    cout << player.location->printInfo();




    //cout << "done." << endl;



}






void Game::doNextTurn(){
    //cout << "this is where we will enter directions" << endl;
    cout << "enter go and direction" << endl;

    string verb = "";
    string noun = "";
    cin >> verb;
    if (verb == "go"){
        cin >> noun;
        commandGo(noun);



    }




}

void Game::commandGo(string direction){
    //cout << "trying this out " << endl;

     if (direction == "east") {
        if (player.location->east == 0) {
            cout << "You can't go east here." << endl;
        }
        else {
            player.location = player.location->east;

        }
    }


     else if (direction == "west") {
        if (player.location->west == 0) {
            cout << "You can't go west here." << endl;
        }
        else {
            player.location = player.location->west;
        }
    }


     else if (direction == "south") {
        if (player.location->south == 0) {
            cout << "You can't go south here." << endl;
        }
        else {
            player.location = player.location->south;
        }
    }


     else if (direction == "north") {
        if (player.location->north == 0) {
            cout << "You can't go east north." << endl;
        }
        else {
            player.location = player.location->north;
        }
    }

    else {
        cout << "cannot go that way" << endl;
    }


}

void Game::commandLook(){
    cout << "use to find descriptions of rooms" << endl;

    cout << player.location->printInfo();

    }


void Game::gameOver()
{
    cout << "game is over" << endl;
}