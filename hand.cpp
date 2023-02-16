#include "hand.h"

using namespace std;

Hand::Hand(Card* first, Card* second){
    hand_.push_back(first);
    hand_.push_back(second);
}

Hand::~Hand(){
    delete hand_[0];
    delete hand_[1];
}

void Hand::displayString() {
    hand_[0]->displayString();
    hand_[1]->displayString();
}