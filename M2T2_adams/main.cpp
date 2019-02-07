//CSC 134
// M3T2
// Matthew Adams
// 2/07/2019
#include <iostream>

using namespace std;
void createPayChartWithFor ()
{
    float payPerHour;
    float grossPay;
    int i;
    cout << "this is the pay chart using for loop :" <<  endl;
    cout << "please enter the pay per hour : " << endl;
    cin >> payPerHour;
    cout << "Hours \t \t Gross Pay" << endl;
    cout << "---------------------------" << endl;
    for (i=30; i<= 40; i++)
        {
        grossPay=i*payPerHour;
        cout << i << "\t \t" << grossPay << endl;
        }
}
void createPayChartWithWhile ()
{
    float payPerHour;
    float grossPay;
    int i = 30;
    cout << "this is pay chart using while loop :" << endl;
    cout << "Please enter your pay per hour." ;
    cin >> payPerHour;
    cout << "Hours \t \t Gross pay" << endl;
    cout << "----------------------------" << endl;
    while (i <= 40)
    {
         grossPay = payPerHour*i;
     cout << i << "\t \t" << grossPay << endl;
     i++;
    }
}


int main()
{
    // print users hours worked and gross total pay, using for loop
    createPayChartWithFor ();

    // pay chart with while loop
    createPayChartWithWhile ();


    return 0;
}
