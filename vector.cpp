#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numbers;


    for (int i = 0; i < 10; i++)
    {
        numbers.push_back(i);
    }
    
    // for(int number:numbers) //easy print in vector, like in python
    // {
    //     cout << number << endl;
    // }

    // for (auto it = numbers.begin(); it != numbers.end(); it++)
    // {
    //     cout << *it << endl; //value of the elem
    //     cout << &it << endl; //adress of the iterator
    //     cout << &(*it) << endl; //adress of the elem
    // }

    // auto it = numbers.begin();
    // cout << *(it);

    // for (auto it = numbers.cbegin(); it != numbers.cend(); it++) //use const iterator only for printing 
    // {
    //     cout << *it << endl;
    // }
    

    //Important functionalities
	// cout << "Size: " << numbers.size() << endl;
	// cout << "Max size: " << numbers.max_size() << endl;
	// cout << "Capacity: " << numbers.capacity() << endl; //tell u how many elems you can add be4 resizing
	// numbers.resize(5);
	// cout << "Size after resizing: " << numbers.size() << endl;

	// if (numbers.empty())
	// 	cout << "Vector is empty" << endl;
	// else
	// 	cout << "Vector is not empty" << endl;

	// cout << "Element[0] is: " << numbers[0] << endl;
	// cout << "Element at(0) is: " << numbers.at(0) << endl; //the same as above for pass the iterator pos

	// cout << "Front: " << numbers.front() << endl;
	// cout << "Back: " << numbers.back() << endl;

    /*Size: 10
    Max size: 2305843009213693951
    Capacity: 16
    Size after resizing: 5
    Vector is not empty
    Element[0] is: 0
    Element at(0) is: 0
    Front: 0
    Back: 4*/




    // //insert element at specific position in vector
	// numbers.insert(numbers.begin() + 2, 88);
	// //erase element from a specific position
	// numbers.erase(numbers.begin() + 2);
	// //remove last element of vector
	// numbers.pop_back();

    // for(auto n : numbers) {
    //     cout << n << endl;
    // }

	//clear all the elements of vector
	numbers.clear(); 
	cout << "Size after clear: " << numbers.size() << endl;

    
    return 0;
}