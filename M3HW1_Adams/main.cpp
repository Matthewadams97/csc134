// CSC 134
// M3HW1
// Matthew Adams
// 20/17/2019
#include <iostream>
#include <math.h>

using namespace std;
void creatListingFiveByone()
{
    cout << fabs(-10.5) << endl;
    cout << fabs(10.5) << endl;
}
void creatListingFiveByTwo()
{
    double myNumber;
    myNumber = fabs(-23.87) ;
    cout << myNumber << endl;
}
void creatListingFiveByThree()
{
    double start;
    double finish;
    start = -253.985;
    finish = fabs(start) ;
    cout << finish << endl;
}
void creatListingFiveByFour()
{
    double number = 10.0;
    double exponent = 3.0;
    cout << pow(number,exponent) << endl;
}


int addOne (int start)
{
    int newnumber;
    newnumber = start + 1;
    return newnumber;
}



void creatListingFiveByFive()
{
int testNumber;
int result;
testNumber = 20;
result = addOne(testNumber);
cout << result << endl;
}
int main()
{
    cout << "Listing 5-1" << endl;
    creatListingFiveByone();
    cout << "Listing 5-2" << endl;
    creatListingFiveByTwo();
    cout << "Listing 5-3" << endl;
    creatListingFiveByThree();
    cout << "Listing 5-4" << endl;
    creatListingFiveByFour();
    cout << "Listing 5-5" << endl;
    creatListingFiveByFive();



    return 0;
}
