#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int r = 1; r <= n; r++) {

      for (int c = 1; c <= r; c++) {
        cout << c;
      }

      for (int c = 1; c <= 2 * (n - r); c++) {
        cout << " ";
      }

      for (int c = r; c >= 1; c--) {
        cout << c;
      }

      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}
