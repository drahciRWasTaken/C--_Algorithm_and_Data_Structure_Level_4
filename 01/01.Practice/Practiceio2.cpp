#include "iostream"
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 0) {
        cout << "x is a positive number" << endl;
    } else if (x == 0) {
        cout << "x is 0" << endl;
    } else {
        cout << "x is a negative number" << endl;
    }
    return 0;
}