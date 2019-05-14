/*
CSC 134
Matthew Adams
M7T1
5/14/2019
*/



#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    /*
    ofstream outfile("..\myfile.txt");
    outfile << "HI" << endl;
    outfile.close();

    string word;
    ifstream infile("..\myfile.txt");
    infile >> word;
    cout << word << endl;
    infile.close();
    */

    ofstream outfile("outfile.txt");
    outfile << "Look at me! Im in a file" << endl;
    int x = 200;
    outfile << x << endl;
    outfile.close();


    ofstream sals("salaries.txt");
    sals << setprecision(2);
    sals.setf(ios::fixed);
    sals.setf(ios::left);

    sals << setw(20) << "Name" << set(10) << "Salary" ;
    sals << endl;

    sals << "-------------------";
    sals << "----------";

    sals << setw(20) << "Hank Williams";
    sals << setw(10) << 28422.82 << endl;

    sals << setw(20) << "Buddy Holy" ;
    sals << setw(10) << 39292.22 << endl;

    sals << setw(20) << "Otis Redding";
    sals << setw(10) << 43838.85 << endl;
    sals.close();






    return 0;
}
