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


    int locationId[] = {BEDRROM,The_Upstairs_Hallway,The_Stairs,Downstairs_Hallway,The_kitchen,The_dining_room,The_living_room,Front_Lawn};


    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = description[i];
        rooms[i]->locationId = locationId[i];
    }


    rooms[BEDRROM]->east  = rooms[The_Upstairs_Hallway];
    rooms[The_Upstairs_Hallway]->west  = rooms[BEDRROM];
    rooms[The_Upstairs_Hallway]->north = rooms[The_Stairs];
    rooms[The_Stairs]->south = rooms[The_Upstairs_Hallway];
    rooms[The_Stairs]->north = rooms[Downstairs_Hallway];
    rooms[Downstairs_Hallway]->south = rooms[The_Stairs];
    rooms[Downstairs_Hallway]->west  = rooms[The_dining_room];
    rooms[The_dining_room]->east  = rooms[Downstairs_Hallway];
    rooms[Downstairs_Hallway]->north = rooms[The_kitchen];
    rooms[The_kitchen]->south = rooms[Downstairs_Hallway];
    rooms[Downstairs_Hallway]->east  = rooms[The_living_room];
    rooms[The_living_room]->west  = rooms[Downstairs_Hallway];
    rooms[The_living_room]->east  = rooms[Front_Lawn];
    rooms[Front_Lawn]->west  = rooms[The_living_room];

    Item keys        = Item("keys", "Your car keys for the car in the front lawn", BEDRROM);
    itemList.add(keys);
    Item backpack    = Item("Backpack", "Your books for class are in here. Might need those.", The_living_room);
    itemList.add(backpack);
    Item waterbottle = Item("Waterbottle", "Filled with water, to stay hydrated all day.", The_kitchen);
    itemList.add(waterbottle);


    //itemList.add(keys);
    //itemList.add(backpack);
    //itemList.add(waterbottle);

    //itemList.printAllItems();

    player.location = rooms[BEDRROM];

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
    itemList.printItemsInLocation(player.location->locationId);

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
