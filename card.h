#include <iostream>
#include <vector>
#include <string>

class Card {
    public:
    Card(const int val, std::string suit);
    ~Card();

    int getVal() const;
    std::string getSuit() const;
    void displayString() const;
    
    private:
    std::string suit_;
    const int val_;
};