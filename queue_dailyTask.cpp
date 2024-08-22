#include <iostream>
#include <queue>
#include <string>

using namespace std;

void displayTask(queue<string> List) {
    while(!List.empty()) {
        cout << List.front() << "  ";
        List.pop();
    }
    cout << endl;
}


int main() {

    queue<string> ListofTasks;
    string task;

    while(ListofTasks.size() < 5) {
        cout << "Please enter your task: ";
        getline(cin, task);
        ListofTasks.push(task);
        displayTask(ListofTasks);
    }

    while(!ListofTasks.empty()) {
        cout << "Tap Enter to do first task:" << endl;
        cin.ignore(); // Ignore the newline left in the buffer
        cin.get(); // Wait for the Enter key press
        cout << "You did " << ListofTasks.front() << endl;    
        ListofTasks.pop();
        cout << "Tasks remain: ";
        displayTask(ListofTasks);
    }
    
    cout << "Congratulation !! you finish the day !!" << endl;

    return 0;
}