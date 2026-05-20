#include<iostream>
using namespace std;

void printNumberPyramid(int n) {
    for (int r = 1; r <= n; r++) {

      for (int c = 1; c <= n - r; c++) {
        cout << " ";
      }
      for (int c = 1; c <= r; c++) {
        cout << c << " ";
      }
      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printNumberPyramid(n);
    return 0;
}