#include <iostream>

using namespace std;
int main()
{
    cout << "Listing 7-1" << endl;
    int numberOfPotHoles = 532587;
    cout << &numberOfPotHoles << endl;
    cout << "Listing 7-2" << endl;
    int *ptr;
    ptr = &numberOfPotHoles;
    *ptr = 6087;
    cout << numberOfPotHoles << endl;
    cout << "Listing 7-3" << endl;
    int saveForLater;
    saveForLater = *ptr;
    cout << saveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << saveForLater << endl;
    cout << "Listing 7-4" << endl;
    string goodMoive;
    string *ptrToString;
    goodMoive = "best in show";
    ptrToString = &goodMoive;
    cout << *ptrToString << endl;
    cout << "Listing 7-5" << endl;
    string horribleMovie;
    string *ptrToStringTwo;
    ptrToStringTwo = &horribleMovie;
    horribleMovie = "L.A. Confidential";
    for (unsigned i = 0; i < horribleMovie.length (); i++){
        cout << (*ptrToStringTwo) [i] << " ";
    }
    cout <<  endl;
    cout << "Listing 7-6" << endl;
    int expensiveComputer;
    int cheapComputer;
    int * ptrstringThree;
    ptrstringThree = &expensiveComputer;
    *ptrstringThree = 2000;
    cout << *ptrstringThree << endl;
    ptrstringThree = & cheapComputer;
    *ptrstringThree = 500;
    cout << *ptrstringThree << endl;
    ptrstringThree = &expensiveComputer;
    cout << *ptrstringThree << endl;
    return 0;
}
