#include<iostream>
using namespace std;

void printHollowRightAngleTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            if (row == 1 || row == n || col == 1 || col == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printHollowRightAngleTriangle(n);
    return 0;
}
