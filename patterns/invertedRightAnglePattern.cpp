#include<iostream>
using namespace std;

void printInvertedRightAngleTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n - row + 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printInvertedRightAngleTriangle(n);
    return 0;
}
