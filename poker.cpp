#include "hand.h"

using namespace std;

int main(){
    Card* card1 = new Card(6, "clubs");
    Card* card2 = new Card(12, "clubs");
    Hand hand = Hand(card1, card2);

    hand.displayString();

    return 0;
}