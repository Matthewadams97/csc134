#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED
class Atm
{
public:
    Atm();
    ~Atm();

    void deposit(float);
    void checkBalance();
    float withdraw();
private:
    float balance;
};



#endif // ATM_H_INCLUDED
