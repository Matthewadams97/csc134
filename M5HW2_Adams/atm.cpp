#include <iostream>
#include "atm.h"

using namespace std;

Atm::Atm()
{
    balance = 100.00;
}

Atm::~Atm()
{
    cout << "ATM is now empty" << endl;
}


void Atm::deposit(float addedMoney)
{
    cout << "Please enter the amount of money to deposit." << endl;
    cin >> addedMoney;
    if (addedMoney >= 0){
        cout << "Added $" << addedMoney << endl;
        balance = balance + addedMoney;
    }
    else{
        cout << "Can not deposit that money." << endl;
    }
}

void Atm::checkBalance()
{
    cout << "you currently have $" << balance << " in your account." << endl;
}

float Atm::withdraw()
{
    float withdrawAmount;
    float balanceTwo = balance - withdrawAmount ;
    cout << "please enter the amount to withdraw" << endl;
    cin >> withdrawAmount;
    cout << "your current balance is now $" << balanceTwo << endl;

    return balanceTwo;

}
