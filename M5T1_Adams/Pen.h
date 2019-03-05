#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

using namespace std;

enum Color{
blue,
red,
black,
Clear,
grey
};

enum penStyle{
ballpoint,
felt_tip,
fountain_pen,
};

class pen{
public:
    Color inkColor;
    Color shellColor;
    Color capColor;
    penStyle style;
    float length;
    string brand;
    int inkLevelPercent;


void write_on_paper(string words){
    if (inkLevelPercent <= 0){
        cout << "Opps! Im out of ink." << endl;
    }
    else
    {
        cout << words << endl;
        inkLevelPercent = inkLevelPercent - words.length();
    }
}

void break_in_half()
{
    inkLevelPercent = inkLevelPercent / 2;
    length = length / 2;
}
void run_out_of_ink(){
inkLevelPercent = 0;
}
};
#endif // PEN_H_INCLUDED
