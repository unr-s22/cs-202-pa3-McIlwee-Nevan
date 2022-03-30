// Nevan McIlwee
// 3/30/2022
// Account Class Implementations

#include <numeric>
#include <sstream>
#include "money.h"
#include "account.h"

//Constructor
Account::Account(const Money& initial) : initBalance(initial) {}

//Make Deposit/Withdrawal
void Account::makeDeposit(const Money& deposit){
    deposits.push_back(deposit);
    updateBalFlag = true;
}

void Account::makeWithdrawal(const Money& withdrawal){
    withdrawals.push_back(withdrawal);
    updateBalFlag = true;
}

Money Account::getBalance(){
    if (updateBalFlag == false){
        return balance;
    }
    
    Money d;
    Money totalDeposits = std::accumulate(deposits.begin(), deposits.end(), d);
    Money w;
    Money totalWithdrawals = std::accumulate(withdrawals.begin(), withdrawals.end(), w);

    balance = initBalance + totalDeposits - totalWithdrawals;
    updateBalFlag = false;
    return balance;
}

std::stringstream Account::accountDetails(){
    std::stringstream details;
    details << "Account Details" << std::endl;
    details << "--------------------------" << std::endl;
    details << "Current Balance: " << getBalance() << std::endl;
    details << "--------------------------" << std::endl;
    details << "Number of Deposits: " << deposits.size() << std::endl;
    details << "--------------------" << std::endl;
    int i = 1;
    for (auto d : deposits){
        details << "(" << i << ") " << d << std::endl;
        i++;
    }
    details << "--------------------------" << std::endl;
    details << "Number of Withdrawals: " << withdrawals.size() << std::endl;
    details << "--------------------" << std::endl;
    i = 1;
    for (auto w : withdrawals){
        details << "(" << i << ") " << w << std::endl;
        i++;
    }
    details << "--------------------------" << std::endl;

    return details;

}

std::ostream& operator<<(std::ostream& out, Account& account){
    out << account.accountDetails().str();
    return out;
}
