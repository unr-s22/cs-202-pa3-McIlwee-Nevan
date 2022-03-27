// Nevan McIlwee
// 3/26/2022
// Money Class

#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
    int all_cents;

public: 
    //Constructors
    Money(); //Default
    Money(int dollars, int cents);

    //Operational Overloads
    Money operator+ (const Money& rhs);
    Money operator- (const Money& rhs);

    bool operator< (const Money& rhs);
    bool operator> (const Money& rhs);
    bool operator<= (const Money& rhs);
    bool operator>= (const Money& rhs);
    bool operator!= (const Money& rhs);
    bool operator== (const Money& rhs);

    //Stream << overload
    friend std::ostream& operator<< (std::ostream& out, const Money& money);

};

#endif //MONEY_H