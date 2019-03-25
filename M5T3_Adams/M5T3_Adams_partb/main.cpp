/*CSC 134
M5T3
Matthew Adams
3/23/2019*/


#include <iostream>

using namespace std;

class Walnut
{
public:
    int Size;

};
class Squirrel
{
private:
    Walnut *Mydinner;
public :
    Squirrel();
    ~Squirrel();
};

Squirrel::Squirrel()
{
    cout << "Starting" << endl;
    Mydinner = new Walnut;
    Mydinner->Size = 30;
}

Squirrel::~Squirrel()
{
    cout << "Cleaning up my mess!" << endl;
    delete Mydinner;
}

int main()
{
    Squirrel *Sam = new Squirrel;
    Squirrel *Sally = new Squirrel;
    delete Sam;
    delete Sally;
    return 0;
}
