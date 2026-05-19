#include<iostream>
using namespace std;

void printRightAngleTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printRightAngleTriangle(n);
    return 0;
}
