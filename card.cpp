#include "card.h"

using namespace std;

Card::Card(const int val, string suit) :
val_(val),
suit_(suit)
{}

Card::~Card(){}

int Card::getVal() const{
    return val_;
}

string Card::getSuit() const{
    return suit_;
}

void Card::displayString() const{
    cout << getVal() << ", " << getSuit() << endl;
}