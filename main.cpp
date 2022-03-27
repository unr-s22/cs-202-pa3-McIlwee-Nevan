// Nevan McIlwee
// 3/27/2022
// Programming Assignment 3

#include<iostream>
#include"money.h"

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