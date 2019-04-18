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
    return 0;
}
