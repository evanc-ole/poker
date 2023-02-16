CXX=g++
CXXFLAGS=-g -Wall -std=c++11
#Uncomment for parser DEBUG
#DEFS=-DDEBUG

OBJS=poker.o card.o deck.o hand.o

all: poker

poker: $(OBJS)
	$(CXX) $(CXXFLAGS) $(DEFS) -o $@ $(OBJS)

poker.o: poker.cpp deck.h hand.h
	$(CXX) $(CXXFLAGS) $(DEFS) -o $@ -c poker.cpp
card.o: card.cpp card.h 
	$(CXX) $(CXXFLAGS) $(DEFS) -o $@ -c card.cpp
deck.o: deck.cpp deck.h card.h 
	$(CXX) $(CXXFLAGS) $(DEFS) -o $@ -c deck.cpp
hand.o: hand.cpp hand.h card.h
	$(CXX) $(CXXFLAGS) $(DEFS) -o $@ -c hand.cpp


clean:
	rm -f *.o poker
