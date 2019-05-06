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
    gameIsRunning = true;
    string names[] = {  "My bedroom",
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

    const int BEDRROM = 0;
    const int The_Upstairs_Hallway = 1;
    const int The_Stairs = 2;
    const int Downstairs_Hallway = 3;
    const int The_kitchen = 4;
    const int The_dining_room = 5;
    const int The_living_room = 6;
    const int Front_Lawn = 7;
    int locationId[] = {BEDRROM,The_Upstairs_Hallway,The_Stairs,Downstairs_Hallway,The_kitchen,The_dining_room,The_living_room,Front_Lawn};


    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = description[i];
    }


    rooms[0]->east  = rooms[1];
    rooms[1]->west  = rooms[0];
    rooms[1]->north = rooms[2];
    rooms[2]->south = rooms[1];
    rooms[2]->north = rooms[3];
    rooms[3]->south = rooms[2];
    rooms[3]->west  = rooms[5];
    rooms[5]->east  = rooms[3];
    rooms[3]->north = rooms[4];
    rooms[4]->south = rooms[3];
    rooms[3]->east  = rooms[6];
    rooms[6]->west  = rooms[3];
    rooms[6]->east  = rooms[7];
    rooms[7]->west  = rooms[6];

    Item keys        = Item("keys", "Your car keys for the car in the front lawn", 0);
    Item backpack    = Item("Backpack", "Your books for class are in here. Might need those.", 6);
    Item waterbottle = Item("Waterbottle", "Filled with water, to stay hydrated all day.", 4);


    itemList.add(keys);
    itemList.add(backpack);
    itemList.add(waterbottle);

    itemList.printAllItems();

    player.location = rooms[0];

    cout << player.location->printInfo();




    //cout << "done." << endl;



}






void Game::doNextTurn(){
    //cout << "this is where we will enter directions" << endl;
    //cout << "enter go and direction" << endl;

    string verb = "";
    string noun = "";
    cin >> verb;
    if (verb == "go"){
        cin >> noun;
        commandGo(noun);
        cout << player.location->printInfo();
    }
    else if(verb == "look"){
        commandLook();
    }
    else if (verb == "examine") {
        cin >> noun;
        commandExamine(noun);
    }
    else if (verb == "quit"){
        gameOver();
    }

    else {

        cout << "that is not a command." << endl;
    }

}

void Game::commandGo(string direction){

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
            cout << "You can't go north." << endl;
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
    //cout << "use to find descriptions of rooms" << endl;

    cout << player.location->printInfo();

    }
// ITEM COMMANDS
void Game::commandExamine(string noun) {
    if (itemList.isItemHere(noun, player.location->locationId)) {

        //print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "It's on the floor here." << endl;
    }
    else if (itemList.isItemHere(noun, INVENTORY))
    {

        // print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "You're carrying that." << endl;
    }
    else
    {
        cout << "That is not here." << endl;
    }
}




bool Game::isRunning()
{
    return gameIsRunning;
}


void Game::gameOver()
{
    cout << "game is over" << endl;
    gameIsRunning = false;
}
