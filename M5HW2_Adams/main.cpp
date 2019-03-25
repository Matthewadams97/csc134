/*M5HW2
CSC 134
MATTHEW ADAMS
3/24/2019
*/
#include <iostream>
#include "atm.h"

using namespace std;

int main()
{
    cout << "------------ATM version 1----------" << endl;
    Atm myBank;
    float addedMoney;
    myBank.deposit(addedMoney);
    myBank.checkBalance();
    myBank.withdraw();
    myBank.checkBalance();
//UNABLE TO PASS BALANCE TO WITHDRAW FUNCTION THE BACK TO BALANCE.
    return 0;
}
