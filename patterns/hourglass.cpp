#include<iostream>
using namespace std;

void printHourglass(int n) {
    for (int r = 1; r <= n; r++) {

      for (int c = 1; c <= r - 1; c++) {
        cout << " ";
      }
      for (int c = 1; c <= 2 * (n - r) + 2; c++) {
        cout << "*";
      }
      cout << "\n";
    }
    for (int r = 1; r <= n; r++) {

      for (int c = 1; c <= n - r; c++) {
        cout << " ";
      }
      for (int c = 1; c <= 2 * r; c++) {
        cout << "*";
      }
      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the size of the hourglass: ";
    cin >> n;
    printHourglass(n);
    return 0;
}