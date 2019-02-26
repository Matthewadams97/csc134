#include <iostream>
using namespace std;
float convertCtoK();
float tempK;
float tempC;
float convertKtoC();
void printTempConvertMenu(){
cout << "Temp Conversion Menu" << endl;
cout << "--------------------" << endl;
cout << "1. Kelvin to Celsius" << endl;
cout << "2. Celsius to Kelvin" << endl;
}

void tempConvertMenu(){
int choiceTwo;

    do {
        printTempConvertMenu();
        cout << "option:" << endl;
        cin >> choiceTwo ;
    switch (choiceTwo){
    case 1 :
        cout << "this will convert K to C using float convertKtoC" << endl;
        cout << "intput the Temp:" << endl;
        cin >> tempK;
        float convertKtoC(float tempK);
    break;
    case 2 :
        cout << "this will convert C to K using float convertCtoK" << endl;
    break;
    case 0 :
        cout << "exiting" << endl;
    break;
    default:
        cout << "invalid choice" << endl;
        }
    }
    while (choiceTwo != 0) ;
}



float convertKtoC(float tempK){
cout << "see if this works" << endl;
cout << "input the temp in K:" << endl;
float convertCtoK=tempK - 273.15;

}



float convertCtoK(float tempC){
cout << "see if this works" << endl;
cout << "input the temp in C:" << endl;


}
