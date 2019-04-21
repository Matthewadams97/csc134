#include <iostream>
#include "game.h"
#include "player.h"
#include "room.h"


using namespace std;





int main()
{
    Game g;
    g.startGame();
    while (g.isRunning() == true)
    {
        g.doNextTurn();
    }
    //g.doNextTurn();
    //g.commandLook();
    //g.gameOver();

    /*to do:
    -make menu to start game?
    -describe purpose of game
    -I need to work on my descriptions for the exits, even with my map i was a little lost and was unsure where to go.
    -items: need key for cars and backpack to leave for school.

    */
    return 0;
}
