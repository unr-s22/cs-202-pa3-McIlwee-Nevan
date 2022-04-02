// Nevan McIlwee
// 3/26/2022
// Money Class Implementation

#include<iostream>
#include<iomanip>
#include<ios>
#include"money.h"
 
//Constructors
Money::Money() : all_cents{0} {}

Money::Money(int dollars, int cents) : all_cents{(100*dollars) + cents} {}

//Operational Overloads
Money Money::operator+ (const Money& rhs){
    int sum = this->all_cents + rhs.all_cents;
    int dollars = sum / 100;
    int cents = sum % 100;
    return Money(dollars, cents);
}
Money Money::operator- (const Money& rhs){
    int diff = this->all_cents - rhs.all_cents;
    int dollars = diff / 100;
    int cents = diff % 100;
    return Money(dollars, cents);
}

bool Money::operator< (const Money& rhs){
    if(this->all_cents < rhs.all_cents){return true;}
    else{return false;}
}
bool Money::operator> (const Money& rhs){
    if(this->all_cents > rhs.all_cents){return true;}
    else{return false;}
}
bool Money::operator<= (const Money& rhs){
    if(this->all_cents <= rhs.all_cents){return true;}
    else{return false;}
}
bool Money::operator>= (const Money& rhs){
    if(this->all_cents >= rhs.all_cents){return true;}
    else{return false;}
}
bool Money::operator!= (const Money& rhs){
    if(this->all_cents != rhs.all_cents){return true;}
    else{return false;}
}
bool Money::operator== (const Money& rhs){
    if(this->all_cents == rhs.all_cents){return true;}
    else{return false;}
}

//Stream << overload
std::ostream& operator<< (std::ostream& out, const Money& m){
    double money{m.all_cents * 0.01};
    out << "$" << std::fixed << std::setprecision(2) << money;
    return out;
}