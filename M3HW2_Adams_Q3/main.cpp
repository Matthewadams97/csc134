#include <iostream>

using namespace std;
float length;
float width;

void printArea(float length, float width){
float printArea = length*width;
cout <<"The area is " << printArea << endl;
}


int main()
{
cout << "Hello world!" << endl;
cout << "please enter the length:" << endl;
cin >> length;
cout << "please enter width:" << endl;
cin >> width;
printArea(length,width);
    return 0;
}
