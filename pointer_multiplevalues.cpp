#include <iostream>

using namespace std;

int getMin(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }  
    }
    return min;
}

int getMax(int array[], int size) {
    int max = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void getMinMax(int array[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if(array[i] < *min) {
            *min = array[i];
        }
        if(array[i] > *max) {
            *max = array[i];
        }  
    }
    
}

int main() {

    int numbers[5] = {5,4,-2,29,6};
    cout << "Min is " << getMin(numbers,5) << endl;
    cout << "Max is " << getMax(numbers,5) << endl;

    int min = numbers[0];
    int max = numbers[0];
    getMinMax(numbers, 5, &min, &max);

    cout << min << " " << max << endl;

    return 0;
}