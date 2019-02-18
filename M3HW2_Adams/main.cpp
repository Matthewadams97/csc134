// CSC 134
// M3HW2
// Matthew Adams
// 2/17/2019
#include <iostream>

using namespace std;

float gradeNumber;
char letterGrade;
// #5.)
convertNumberToLetterGrade(float gradeNumber){
    if (gradeNumber >=0 && gradeNumber <= 100)
        {

        if (gradeNumber >= 89.5)
            {
                    letterGrade = 'A';
            }


                else if (gradeNumber >= 79.5)
             {
                    letterGrade = 'B';
             }

                else if (gradeNumber >= 69.5)
             {
                    letterGrade = 'C';
             }

                else if  (gradeNumber >= 59.5)
             {
                    letterGrade = 'D';
             }

                else
             {
                    letterGrade = 'F';
             }
             cout <<"the letter Grade is " << letterGrade << endl;
        }
            else {
                cout << "Grade number was invalid." << endl;
                }


            }


void getNumberGrade(float gradeNumber){
  cout << "Enter grade number between 0 and 100: " << endl;
  cin >> gradeNumber ;
  convertNumberToLetterGrade(gradeNumber);
}
float length;
float width;

//#3.)
void printArea(float length, float width){
float printArea = length*width;
cout <<"The area is " << printArea << endl;
}

// #4.)
float calcArea(float length, float width){
return length * width;
}

int main()
{
    cout << "Hello world!" << endl;
    cout << "Attempt at Bronze." << endl;
    cout << "Attempt at Number 5 :" << endl ;
    getNumberGrade(gradeNumber);

    cout << "Attempt at Number 3 :" << endl;
    cout << "please enter the length:" << endl;
    cin >> length;
    cout << "please enter width:" << endl;
    cin >> width;
    printArea(length,width);

    cout << "Attempt at Number 4:" << endl;
    cout << "Please enter the length " << endl ;
    cin >> length;
    cout << "Please enter the width " << endl;
    cin >> width ;
    cout << "the Area is " <<  calcArea(length,width) << endl ;


    return 0;
}
