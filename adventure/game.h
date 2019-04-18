#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>

#include "room.h"
#include "player.h"

using namespace std;

const int NUM_ROOMS = 8;


class Game
{
    //holds game info
    //game nesds to run

private:

    vector <Room*> rooms;
    Player player;
    bool gameIsRunning;
    //add items and npcs?

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
