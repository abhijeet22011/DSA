#include <iostream>
using namespace std;

 void printSolidDiamond(int n) {
    // upper part (including middle line)
    for (int i = 1; i <= n; i++) {
      // spaces
      for (int j = 1; j <= n - i; j++)
        cout << " ";
      // stars
      for (int k = 1; k <= 2 * i - 1; k++)
        cout << "*";
      cout << "\n";
    }
    n--;
    // lower part
    for (int i = 1; i <= n; i++) {
      // spaces
      for (int j = 1; j <= i; j++)
        cout << " ";
      // stars
      for (int k = 1; k <= 2 * (n - i) + 1; k++)
        cout << "*";
      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printSolidDiamond(n);
    return 0;
}