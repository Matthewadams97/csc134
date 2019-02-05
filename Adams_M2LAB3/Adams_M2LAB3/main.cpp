// CSC 134
// M2LAB2
// Matthew Adams
//01/31/2019

#include <iostream>
/* Program will caclulate letter grades with letter grade.
enter three grades
*/
using namespace std;

int main()
{
    float gradeNumber;
    char letterGrade;
    for(int i=1; i<4; i++){


        cout << "Enter grade number " << endl;
        cin >> gradeNumber ;
        if (gradeNumber >=0 && gradeNumber <= 100){



            if (gradeNumber >= 89.5){
                letterGrade = 'A' ;
            }
            else if (gradeNumber >= 79.5){
                letterGrade = 'B';
         }

            else if (gradeNumber >= 69.5){
                letterGrade = 'C';
         }

            else if  (gradeNumber >= 59.5){
                letterGrade = 'D';
         }

            else{
                letterGrade = 'F';
         }
         cout <<"the letter Grade is " << letterGrade << endl;
        }
        else {
            cout << "Grade number was invalid." << endl;
            }
}
    return 0;
}
