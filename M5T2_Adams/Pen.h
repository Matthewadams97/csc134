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


void write_on_paper(string words);
void break_in_half();
void run_out_of_ink();
};
#endif // PEN_H_INCLUDED
