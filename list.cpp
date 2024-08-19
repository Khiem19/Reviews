/*
Not prefer using list in searching program !!! SLOWWWWW
GOOD for adding elements though !!!
In contrast use vector for searching !!!
*/


#include <iostream>
#include <list>

using namespace std;

void displayRatingConst(const list<int>& playersWaiting) { // by passing the reference, i can use the original and not having the risk of modify it with the const value
    for(list<int>::const_iterator i = playersWaiting.begin(); i != playersWaiting.end(); i++) { //const_iterator
        cout << *i << "\t";
    }
}

void displayRatingOriginal(list<int>& playersWaiting) { // by passing the reference, i can use the original 
    for(list<int>::iterator i = playersWaiting.begin(); i != playersWaiting.end(); i++) {
        cout << *i << "\t";
    }
}

void displayRating(list<int> playersWaiting) { // here the code will create a copy of the input
    for(list<int>::iterator i = playersWaiting.begin(); i != playersWaiting.end(); i++) {
        cout << *i << "\t";
    }
}

void insertPlayerInOrderedList(list<int>& playersByRating, int newPlayerRating) {
    for(list<int>::iterator it = playersByRating.begin(); it != playersByRating.end(); it++) {
        if(*it > newPlayerRating) {
            playersByRating.insert(it, newPlayerRating);
            return;
        }
    }
    playersByRating.push_back(newPlayerRating);
}

int main() {

    list<int> allPlayers = {2,9,6,7,3,1,4,8,3,2,9}; //rating of all players
    
    list<int> beginners; // rating 1-5
    list<int> pros; // rating 6-10

    for(list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++) {
        int rating = *it; //get the value
        if(rating > 0 && rating < 6) {
            insertPlayerInOrderedList(beginners, rating);
        } else if (rating > 5 && rating < 10) {
            insertPlayerInOrderedList(pros, rating);
        }
    }

    cout << "Beginners: " << endl;
    displayRatingConst(beginners);
    cout << endl;
    cout << "Pros: " << endl;
    displayRatingConst(pros);

    return 0;
}