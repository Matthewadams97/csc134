//CSC 134
// Matthew Adams
// M5T1
// 3/05/2019
#include <iostream>
#include "Pen.h"

using namespace std;

int main()
{
    pen favoritePen;

    favoritePen.inkColor = black;
    favoritePen.shellColor = grey;
    favoritePen.capColor = blue;
    favoritePen.style = ballpoint;
    favoritePen.length = 5.5;
    favoritePen.brand = "office depot";
    favoritePen.inkLevelPercent = 30;

    pen worstPen;

    worstPen.inkColor = red;
    worstPen.shellColor = red;
    worstPen.capColor = black;
    worstPen.style = fountain_pen;
    worstPen.length = 5.0;
    worstPen.brand = "Parker";
    worstPen.inkLevelPercent = 60;


    cout << "this is my favorite pen " << endl;
    cout << "Color: " << favoritePen.inkColor << endl;
    cout << "Brand: " <<favoritePen.brand << endl;
    cout << "Ink level: " << favoritePen.inkLevelPercent << endl;
    favoritePen.write_on_paper("Hello I am a pen.");
    cout << "ink Level " << favoritePen.inkLevelPercent << "%" << endl;


    return 0;
}
