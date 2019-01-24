// CSC 134
// M2LAB2
// Matthew Adams
//01/24/2019



#include <iostream>

using namespace std;

int main()
{
    float gradeNumber;
    char letterGrade;
    cout << "Enter grade number " << endl;
    cin >> gradeNumber ;
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
    return 0;
}
