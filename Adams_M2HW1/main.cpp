//CSC 134
//M2HW1
// Matthew Adams
// 02/03/2019
#include <iostream>

using namespace std;

int main()
{
//1.)
cout << "1.) The area of a rectangle." << endl;
float widthRectangle;
float lengthRectangle;
cout << "Please enter the width of the rectangle:" << endl;
cin >> widthRectangle ;
cout << "Please enter the length of the rectangle:"  << endl;
cin >> lengthRectangle;
float areaRectangle;
areaRectangle=widthRectangle*lengthRectangle;
cout << "The area of the wall is " << areaRectangle << endl;

//2.)
cout << "2.) The temperature in Fahrenheit from Celsius." << endl;
cout << "Please enter the temperature in C:" << endl;
float tempC;
cin >> tempC;
float nine;
float five;
float tempCTimesNineOverFive;
float nineOverFive;
float tempF;
float plus32;
nine=9.0;
plus32=32;
five=5.0;
nineOverFive=nine/five;
tempCTimesNineOverFive= nineOverFive*tempC;
tempF=tempCTimesNineOverFive+plus32;
cout << "The temperature in Fahrenheit is " << tempF << " degrees." << endl;

// 4.)
float gradeOne;
float gradeTwo;
float gradeThree;
float gradeSum;
float three;
float gradeAverage;
three=3;
cout << "4.) The average of three grades and the letter grade." << endl;
cout << "Please input grade one:" << endl;
cin >> gradeOne;
cout << "Please input grade two:" << endl;
cin >> gradeTwo;
cout << "Please input grade three:" << endl;
cin >> gradeThree;
gradeSum= gradeOne+gradeTwo+gradeThree;
gradeAverage=gradeSum/three;
cout << "The average of the Grades is " << gradeAverage << endl;
    char letterGrade;
    if (gradeAverage >= 89.5){
        letterGrade = 'A';
        }

    else if (gradeAverage >= 79.5){
     letterGrade = 'B';
    }

    else if (gradeAverage>= 69.5){
     letterGrade = 'C';
     }

    else if  (gradeAverage >= 59.5){
     letterGrade = 'D';
     }

    else{
     letterGrade = 'F';
     }
 cout <<"The average test grades gives you a letter Grade  " << letterGrade << endl;

 //5.)
 cout << "5.) The square footage of a wall." << endl;
 float wallHeight;
 float wallLength;
 float squareFootage;
 cout << "Please enter the height of the wall." << endl;
 cin >> wallHeight;
 cout << "please enter the length of the wall." << endl;
 cin >> wallLength;
 squareFootage=wallHeight*wallLength;
 cout << "The square footage of the wall is " << squareFootage << "sq ft." << endl;

 //6.)
 cout << "6.) How many gallons are required to paint the wall." << endl;
float gallonsPaint;
float gallonCovers;
gallonCovers=200;
gallonsPaint=squareFootage/gallonCovers;
cout << "You will require " << gallonsPaint << " gallons of paint to paint the wall." << endl;

//7.)
cout << "7.) How many gallons of paint will be required based on the number of walls. If the walls height and length are the same." << endl;
float numberWalls;
float wallHeightTwo;
float wallLengthTwo;
float squareFootageTwo;
float gallonCoversTwo;
float numberGallons;
float paintGallons;
gallonCoversTwo=350;
cout << "Please enter the number of walls." << endl;
cin >> numberWalls;
cout << "Please enter the height of the wall." << endl;
cin >> wallHeightTwo;
cout << "Please enter the length of the wall." << endl;
cin >> wallLengthTwo;
squareFootageTwo=wallHeightTwo*wallLengthTwo;
numberGallons=squareFootageTwo/gallonCoversTwo;
paintGallons=numberGallons*numberWalls;
cout << "You will need " << numberGallons << " for one wall." ;
cout << "Or " << paintGallons << " gallons for " << numberWalls << " walls." << endl;
return 0;
}
