#include <iostream>
#include <memory>

using namespace std;

class Myclass {
public:
    Myclass() {
        cout << "Constructor invoked" << endl;
    }
    ~Myclass() {
        cout << "Destructor invoked" << endl;
    }

};


int main() {
    
    // unique_ptr<Myclass>unPtr1 = make_unique<Myclass>();
    
    // shared_ptr<Myclass>shPtr1 = make_shared<Myclass>();
    // cout << "Share count: " << shPtr1.use_count() << endl;
    // {
    //     shared_ptr<Myclass>shPtr2 = shPtr1;
    //     cout << "Share count: " << shPtr1.use_count() << endl;
    // }
    // cout << "Share count: " << shPtr1.use_count() << endl;

    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;
    }

    

    return 0;
}