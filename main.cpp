// Nevan McIlwee
// 3/27/2022
// Programming Assignment 3

#include <iostream>
#include "money.h"
#include "account.h"

void checkRelOp(Money& m1, Money& m2){
    if(m1 == m2){
        std::cout << m1 << " is equal to " << m2 << std::endl;
    }else if(m1 > m2){
        std::cout << m1 << " is greater than " << m2 << std::endl;
    }else if(m1 < m2){
        std::cout << m1 << " is less than " << m2 << std::endl;
    }
}


int main(){
    Account account(Money(300, 23));
    std::cout << account << std::endl;

    account.makeDeposit(Money(200,00));
    account.makeDeposit(Money(300,24));
    account.makeDeposit(Money(501,22));
    std::cout << "After Deposits: " << std::endl << account << std::endl;

    account.makeWithdrawal(Money(300,10));
    account.makeWithdrawal(Money(201,34));
    std::cout << "After Withdrawals: " << std::endl << account << std::endl;


    Money g{4,30};
    Money l{2,75};
    Money e1{g+l};
    Money e2{l-g};

    checkRelOp(g,l);
    checkRelOp(l,g);
    checkRelOp(e1,e1);
    checkRelOp(e2,e2);

    return 0;
}