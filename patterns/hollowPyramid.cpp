#include <iostream>
using namespace std;

void printHollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n - i; j++) {
        cout << "  ";
      }

      if (i == 1)
        cout << "* ";

      else if (i == n) {
        for (int k = 1; k <= 2 * n - 1; k++) {
          cout << "* ";
        }
      } else {
        cout << "* ";
        for (int l = 1; l <= (2 * i - 3); l++) {
          cout << "  ";
        }
        cout << "* ";
      }
      cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printHollowPyramid(n);
    return 0;
}