#include <iostream>
#include <vector>

using namespace std;

void swapNumber(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp; 
}

void printVector(const vector<int>& arr ) {
    for(auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    for(int i = 0; i < arr.size() -1; i++) {
        for(int j = 0; j < arr.size() -i -1; j++) {
            if(arr[j] > arr[j + 1]) {
                swapNumber(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if(min_index != i) {
            swapNumber(arr[min_index], arr[i]);
        }
    }
}

void insertionSort(vector<int>& arr) {

}

int main() {
    vector<int> arr = {6, 3, 2, 1, 4, 5, 7};
    bubbleSort(arr);
    //selectionSort(arr);


    printVector(arr);
    return 0;
}
