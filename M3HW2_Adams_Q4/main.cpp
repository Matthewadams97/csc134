#include <iostream>

using namespace std;

float length;
float width;
float calcArea(float length, float width){
return length * width;
}
int main()
{
    cout << "Hello world!" << endl;
    cout << "Please enter the length " << endl ;
    cin >> length;
    cout << "Please enter the width " << endl;
    cin >> width ;
    cout << "the Area is " <<  calcArea(length,width) << endl ;
    return 0;
}
