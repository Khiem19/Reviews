#include <iostream>

using namespace std;

//new - allocate memory
//delete - free memory
//must use delete after allocate

int main() {

    int size;
    cout << "Size: ";
    cin >> size;
    // int myArray[size];
    int* myArray = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for(int i = 0; i < size; i++) {
        cout << myArray[i] << "  ";
    }

    delete[]myArray;
    myArray = NULL;

    return 0;
}