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
int main(){
//just calling main menu right now
cout << "Welcome to Matthew's Dataman Calculator. This calculator can solve simple math equations and convert temperatures." << endl;
main_menu();
return 0;

}
int main_arithmetic(){
    int numberTwo;
    int numberOne;
    char opcode;
    /*cout << "Please enter the first number" << endl;
    cin >> numberOne ;
    cout << "Please enter the second number" << endl;
    cin >> numberTwo ;*/
    cout << "Enter the expression like the examples:" << endl;
    cout << "Examples : 2+2 or 2*2 or 2/2 or 2-2" << endl;
    cout << "Please enter the * to multiply and use /  to divide." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Enter the expression here" << endl;
    cin >> numberOne >> opcode >> numberTwo ;
    if (opcode == '+'){
        cout << "The answer is :" << add(numberOne,numberTwo) << endl;
        cout << "Returning you to the Main Menu." << endl;
        cout << "" << endl;
        cout << "" << endl;
    }
    if (opcode == '-'){
        cout << "The answer is :" << subract(numberOne,numberTwo) << endl;
        cout << "Returning you to the Main Menu." << endl;
        cout << "" << endl;
        cout << "" << endl;
    }
    if (opcode == '*'){
        cout << "The answer is :" << mutiply(numberOne,numberTwo) << endl;
        cout << "Returning you to the Main Menu." << endl;
        cout << "" << endl;
        cout << "" << endl;
    }
    if (opcode == '/'){
        cout << "The answer is :" << division(numberOne,numberTwo) << endl;
        cout << "Returning you to the Main Menu." << endl;
        cout << "" << endl;
        cout << "" << endl;

    }
    //cout << add(numberOne,numberTwo) << endl;

    return 0;
}

void main_menu(){
    int choice;

    do {
        print_main_menu();
        cout << "Enter 1 to begin using the arithmetic mode." << endl;
        cout << "Or Enter 2 to begin the temperature conversion mode." << endl;
        cout << "option:" << endl;
        cin >> choice ;
    switch (choice){
    case 1 :
        cout  << "1" << endl;
        main_arithmetic();
        break;
    case 2 :
        tempConvertMenu();
        break;
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
    cout << "Please enter the number correlated to the option to select the calculator mode." << endl;
    cout << "=============================================================================================" << endl;
    cout << "|                                  Main Menu                                                |" << endl;
    cout << "=============================================================================================" << endl;
    cout << "|                              1. Arithmetic                                                |" << endl;
    //cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "|     This will do simple math like addition, subtraction, multiplication, or division.     |" << endl;
    cout << "=============================================================================================" << endl;
    cout << "|                              2. Temp conversion                                           |" << endl;
    //cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "|                        This will convert temperatures.                                    |" << endl;
    cout << "=============================================================================================" << endl;
    cout << "|                              0. To Exit                                                   |" << endl;
    cout << "=============================================================================================" << endl;

}


void printTempConvertMenu(){
cout << "===========================================" << endl;
cout << "|         Temp Conversion Menu            |" << endl;
cout << "===========================================" << endl;
cout << "|      1. Kelvin to Celsius               |" << endl;
cout << "|      2. Celsius to Kelvin               |" << endl;
cout << "|      3. Celsius to Fahrenheit           |" << endl;
cout << "|      4. Fahrenheit to Celsius           |" << endl;
cout << "|      0. To return to the Main Menu.     |" << endl;
cout << "===========================================" << endl;
}


void tempConvertMenu(){
int choiceTwo;
float tempK;
float tempC;
float tempF;
//float Conversion;
//float kConstant = 273.15;
    do {
        printTempConvertMenu();
        cout << "option: " << endl;
        cin >> choiceTwo ;
    switch (choiceTwo){
    case 1 :
        cout << "This will convert K to C" << endl;
        cout << "Please enter the temp in K:" << endl;
        cout << "You do not need to enter the Letter, only the number." << endl;
        cin >> tempK;
        convertKtoC(tempK);
        cout  << "The temp is : " << convertKtoC(tempK) << endl;
    break;
    case 2 :
        cout << "This will convert C to K" << endl;
        cout << "Please enter the temp in C:" << endl;
        cout << "You do not need to enter the Letter, only the number." << endl;
        cin >> tempC;
        convertCtoK(tempC);
        cout << "The temp in K is : " << convertCtoK(tempC) << endl;
    break;
    case 3 :
        cout << "This will convert the temp in C to F" << endl;
        cout << "Please enter the the temp in C:" << endl;
        cout << "You do not need to enter the Letter, only the number." << endl;
        cin >> tempC;
        convertCtoF(tempC);
        cout << "The temp in F is : " << convertCtoF(tempC) << endl;
        break;
    case 4 :
        cout << "This will convert the temp in F to C" << endl;
        cout << "Please enter the the temp in F:" << endl;
        cout << "You do not need to enter the Letter, only the number." << endl;
        cin >> tempF;
        convertFtoC(tempF);
        cout << "The temp in C is : " << convertFtoC(tempF) << endl;
        break;
    case 0 :
        //cout << "Exiting" << endl;
        cout << "Returning to the Main Menu." << endl;
        cout << "" << endl;
        cout << "" << endl;
    break;
    default:
        cout << "invalid choice" << endl;
        }
    }
    while (choiceTwo != 0) ;
}
