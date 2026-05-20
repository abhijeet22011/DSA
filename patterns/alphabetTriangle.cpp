#include<iostream>
using namespace std;

void printAlphabetTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
       for (int j = 1; j <= i; j++) {
        cout << ch++ << " ";
       }
      cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printAlphabetTriangle(n);
    return 0;
}