#ifndef ACCOUNT_H 
#define ACCOUNT_H 

class Account
{
public:
    Account(double); // constructor initializes balance 
    void credit(double); // add an amount to the account balance 
    bool debit(double); // subtract an amount from the account balance 
    void setBalance(double); // sets the account balance 
    double getBalance(); // return the account balance 
private:
    double balance; // data member that stores the balance 
}; // end class Account 


class SavingAccount :public Account
{
public:
    SavingAccount(double ,double );
    double calculateInterest();
private:
    double interestRate;
};

class CheckingAccount :public Account
{
public:
    CheckingAccount(double , double );
        void credit(double);
    bool debit(double);
private:
    double transactionFee;
};
#endif 