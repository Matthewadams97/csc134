// CSC 134
// M3T1
// Matthew Adams
// 2/5/2019
#include <iostream>
//ask user for number of test
//ask for test grade in loop
//add it to total
// find average
using namespace std;

int main()
{
float grade;
int numberTests;
float average;
float total = 0;
cout << "Please enter the number of tests to average:"  ;
cin >> numberTests;
for (int count=1; count <= numberTests; count++){
    cout << "What is the grade for the test?" ;
    cin >> grade;
    total= total + grade;
    }
cout << "The total= " << total << endl ;
average = total / numberTests;
cout << "the average is " << average << endl;















    return 0;
}
