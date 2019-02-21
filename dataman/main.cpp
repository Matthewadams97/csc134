// CSC 134
//LAB4
// Matthew Adams
// 3/3/2019
#include <iostream>
#include "arithmetic.h"
using namespace std;

int main()
{
    int numberTwo;
    int numberOne;
    char opcode;
    cout << "Hello world!" << endl;
    /*cout << "Please enter the first number" << endl;
    cin >> numberOne ;
    cout << "Please enter the second number" << endl;
    cin >> numberTwo ;*/
    cout << "Enter the expression separated by spaces " << endl;
    cin >> numberOne >> opcode >> numberTwo ;
    if (opcode == '+'){
        cout << add(numberOne,numberTwo) << endl;
    }
    if (opcode == '-'){
        cout << subract(numberOne,numberTwo) << endl;
    }
    if (opcode == '*'){
        cout << mutiply(numberOne,numberTwo) << endl;
    }
    if (opcode == '/'){
        cout << division(numberOne,numberTwo) << endl;

    }
    //cout << add(numberOne,numberTwo) << endl;

    return 0;
}
