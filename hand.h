#include "card.h"

class Hand {
    public:
    Hand(Card* first, Card* second);
    ~Hand();

    void displayString();
    
    private:
    std::vector<Card*> hand_;
};