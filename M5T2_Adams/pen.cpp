#include <iostream>
#include "Pen.h"

using namespace std;


void pen:: write_on_paper(string words){
    if (inkLevelPercent <= 0){
        cout << "Opps! Im out of ink." << endl;
    }
    else
    {
        cout << words << endl;
        inkLevelPercent = inkLevelPercent - words.length();
    }
}

void pen:: break_in_half()
{
    inkLevelPercent = inkLevelPercent / 2;
    length = length / 2.0;
}

void pen:: run_out_of_ink(){
inkLevelPercent = 0;
}
