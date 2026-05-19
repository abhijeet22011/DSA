#include <iostream>
using namespace std;

void printHollowRectangle(int n, int m) {
    for (int row = 1; row <= n; row++) {
      if (row == 1 || row == n) {
        for (int col = 1; col <= m; col++) {
          cout << "*";
        }

      } else {
        cout << "*";
        for (int col = 1; col <= m - 2; col++) {
          cout << " ";
        }
        cout << "*";
      }
      cout << "\n";
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    printHollowRectangle(n, m);
    return 0;
}