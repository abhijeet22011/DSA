#include <iostream>
using namespace std;

void printHollowSquare(int n) {
    // Implement the pattern printing logic here
    for (int row = 1; row <= n; row++) {
      if (row == 1 || row == n) {
        for (int col = 1; col <= n; col++) {
          cout << "*";
        }

      } else {
        cout << "*";
        for (int col = 1; col <= n - 2; col++) {
          cout << " ";
        }
        cout << "*";
      }
      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    printHollowSquare(n);
    return 0;
}  
