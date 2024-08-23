#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {

    map<string,list<string>> Pokedex;

    list<string> pikachuAttacks{"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks{"flame thrower", "scary face", "scratch"};
    list<string> chikoritaAttacks{"razor leaf", "absorb", "poison powder"};

    Pokedex.insert(pair<string,list<string>>("pikachu",pikachuAttacks));
    Pokedex.insert(pair<string,list<string>>("charmander",charmanderAttacks));
    Pokedex.insert(pair<string,list<string>>("chikorita",chikoritaAttacks));

    for(auto pair : Pokedex) {
        cout << pair.first << " - ";

        for(auto attack : pair.second) {
            cout << attack << ", ";
        }
        cout << endl;
    }


    return 0; 
}