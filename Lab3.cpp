#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Type your number for Fibonacci: ";
    cin >> n;

    int a = 1, b = 1;
    int calculate = 0;

    if(n < 1) {
        cout << "Your number so small, type again, but < 1" << endl;
    }

    while (calculate < n) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
        calculate++;
    }

    return 0;
}
