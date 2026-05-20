#include<iostream>
using namespace std;

void printInvertedAlphabetTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= n - i + 1; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printInvertedAlphabetTriangle(n);
    return 0;
}