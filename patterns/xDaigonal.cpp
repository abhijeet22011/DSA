#include<iostream>
using namespace std;

void printZigZag(int n) {
    // part1
    for (int r = 1; r <= n; r++) {

      for (int c = 1; c <= r - 1; c++) {
        cout << " ";
      }
      cout << "* ";
      for (int c = 1; c <= 2 * (n - r); c++) {
        cout << " ";
      }
      cout << "* ";
      cout << "\n";
    }

    // part2
    n++;
    for (int r = 1; r <= n; r++) {
      for (int c = 1; c <= n - r; c++) {
        cout << " ";
      }
      if (r == 1) {
        cout << "* ";
      } else {
        cout << "*";
        for (int c = 1; c <= 2 * r - 3; c++) {
          cout << " ";
        }
        cout << "*";
      }
      cout << "\n";
    }
} 

int main() {
    int n;
    cout << "Enter the size of the zigzag: ";
    cin >> n;
    printZigZag(n);
    return 0;
}