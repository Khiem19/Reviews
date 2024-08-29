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

//recursive
void merge(vector<int>& arr, int left, int right, int mid) {
    int n1 = mid -left +1;
    int n2 = right - mid;

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    //copy arr's values
    for(int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for(int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + i + 1];
    }

    // Initial indexes of the left and right subarrays
    int i = 0;
    int j = 0;
    int k = left; // Initial indexes of the left and right subarrays

    // Merge the temporary arrays back into arr[left..right]
    while(i < n1 && j< n2) {
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

}

void mergeSort(vector<int>& arr, int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2; // Find the middle point

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid); // Sort left half
        printVector(arr);
        mergeSort(arr, mid+1, right); // Sort right half
        printVector(arr);
        
        // Merge the sorted halves
        merge(arr, left, right, mid);
        printVector(arr);
        cout << endl;
    }
}

int main() {
    vector<int> arr = {6, 3, 2, 1, 4, 5, 7};
    printVector(arr);
    // bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    mergeSort(arr, 0, arr.size() -1);

    // printVector(arr);
    return 0;
}
