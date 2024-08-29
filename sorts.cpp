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
                printVector(arr);
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
            printVector(arr);
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            swapNumber(arr[j+1], arr[j]);
            printVector(arr);
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void merge(vector<int>& leftArr, vector<int>& rightArr, vector<int>& arr) {
    int leftSize = leftArr.size();
    int rightSize = rightArr.size();

    int i = 0, l = 0, r = 0;
    // Merge the two arrays while there are elements in both
    while(l < leftSize && r < rightSize) {
        if(leftArr[l] < rightArr[r]) {
            arr[i] = leftArr[l];
            i++;
            l++;
        } else {
            arr[i] = rightArr[r];
            i++;
            r++;
        }
    }

    // Copy remaining elements of leftArray[], if any
    while (l < leftSize) {
        arr[i] = leftArr[l];
        i++;
        l++;
    }
    
    // Copy remaining elements of rightArray[], if any
    while (r < rightSize) {
        arr[i] = rightArr[r];
        i++;
        r++;
    }
}

void mergeSort(vector<int>& arr) {
    int length = arr.size();
    if(length <= 1) return;

    int middle = length / 2;

    vector<int> leftArr(arr.begin(), arr.begin() + middle);
    vector<int> rightArr(arr.begin() + middle, arr.end());

    mergeSort(leftArr);
    mergeSort(rightArr);

    merge(leftArr, rightArr, arr);

}

int main() {
    vector<int> arr = {6, 3, 2, 1, 4, 5, 7};

    // bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    // mergeSort(arr, 0, arr.size() -1);
    mergeSort(arr);

    printVector(arr);
    return 0;
}
