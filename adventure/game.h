#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>

#include "constants.h"
#include "room.h"
#include "player.h"
#include "item.h"

using namespace std;

//const int NUM_ROOMS = 8;


class Game
{
    //holds game info
    //game nesds to run

private:

    vector <Room*> rooms;
    Player player;
    bool gameIsRunning;
    //add items and npcs?
    ItemList itemList;\
    void commandExamine(string);
    void commandInventory();
    void commandGet(string);
    void commandDrop(string);


public:
    Game();
    ~Game();
    void startGame();
    bool isRunning();
    void gameOver();
    void doNextTurn();
    void commandGo(string);
    void commandLook();

};

#endif // GAME_H_INCLUDED
