#include<iostream>
using namespace std;

class BankAccount
{
private:
float balance;

public:
BankAccount(){balance=0;}

void deposit(float amount){balance+=amount;}

void withdraw(float amount)
{
    if(amount<=balance)
    balance-=amount;
    else
    cout<<"InsufficientBalance!"<<endl;
}

    void showBalance(){
        cout<<"Balance="<<balance<<endl;
    }
};

int main()
{
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(300);
    acc.showBalance();

    return 0;
}
