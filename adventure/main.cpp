#include <iostream>
#include "game.h"
#include "player.h"
#include "room.h"


using namespace std;





int main()
{
    cout << "Hello world!" << endl;
    Game ME;
    ME.startGame();
    ME.doNextTurn();
    ME.commandLook();
    return 0;
}