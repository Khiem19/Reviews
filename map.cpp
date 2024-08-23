#include <iostream>
#include <map>
#include <string>
using namespace std;



int main() {

    map<string, string> myDic; //elements always in alphabetical order (ASC), can you unordered map to get rid of order
    myDic.insert(pair<string,string>("strawberry","truskawka"));// key(left) has to unique, value(right) can have duplicates
    myDic.insert(pair<string,string>("orange","pomarancza"));
    myDic.insert(pair<string,string>("apple","jablko"));
    myDic.insert(pair<string,string>("banana","banan"));
    
    myDic["strawberry"] = "TRUSkawka";



    myDic.erase("apple");

    // myDic.clear();
    
    cout << myDic.size() << endl; 

    for(auto pair : myDic) {
        cout << pair.first << " - " << pair.second << endl;
    }




    return 0;
}