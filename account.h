// Nevan McIlwee
// 3/29/2022
// Account Class

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>

class Account {
    //Deposits/Withdrawals
    std::vector<Money> deposits;
    std::vector<Money> withdrawals;

    //Balance
    Money initBalance;
    Money balance;
    bool updateBalFlag{true};

public:
    //Constructor
    Account(const Money& initial);

    //Make Deposit/Withdrawal
    void makeDeposit(const Money& deposit);
    void makeWithdrawal(const Money& withdrawal);

    Money getBalance();

    //print account details - << overload
private:
    std::stringstream accountDetails();
    friend std::ostream& operator<<(std::ostream& out, Account& account);

};

#endif //ACCOUNT_H