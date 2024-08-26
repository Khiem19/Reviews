#include <iostream>

using namespace std;

int recursive_sum(int m, int n) {
    if (m == n) return m;

    return m + recursive_sum(m + 1, n); // 2+3+4+5
}

int main() {
    int m = 2, n = 10000;

    cout << recursive_sum(m, n) << endl;

    return 0;
}