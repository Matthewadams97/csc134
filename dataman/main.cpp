// CSC 134
//LAB4
// Matthew Adams
// 3/3/2019
#include <iostream>
#include "arithmetic.h"
#include "tempConversion.h"
using namespace std;

void main_menu();
int main_arithmetic();
void print_main_menu();
int main_arithmetic(){
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

int main(){
//just calling main menu right now
main_menu();
return 0;

}
void main_menu(){
    int choice;

    do {
        print_main_menu();
        cout << "option:" << endl;
        cin >> choice ;
    switch (choice){
    case 1 :
        // cout  << "1" << endl;
        main_arithmetic();
        break;
    case 2 :
        cout << "2" << endl;
        cout << "to do" << endl;
        tempConvertMenu();
        break;
    /*case 3 :
        cout << "3" << endl;
        break;*/
    case 0 :
        cout << "exiting" << endl;
        break;
    default:
        cout << "invalid choice" << endl;

        }
    }
    while (choice != 0) ;
}

void print_main_menu ()
{
    // display main menu
    cout << "   Main Menu" << endl;
    cout << "----------------" << endl;
    cout << "1. Arithmetic" << endl;
    cout << "2. Temp conversion" << endl;
    cout << "0. to exit" << endl;
    cout << "main menu here" << endl;
}
