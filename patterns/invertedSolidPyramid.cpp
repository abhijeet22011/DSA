#include<iostream>
using namespace std;

void invertedSolidPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << "  ";
        }
        // Print stars
        for (int k = 1; k <= 2 * (n - i ) + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    invertedSolidPyramid(n);
    return 0;
}