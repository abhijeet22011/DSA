#include<iostream>
using namespace std;

void printSymmetricAlphabetPyramid(int n) {
    for (int i = 1; i <= n; i++) {
      // spaces
      for (int j = 1; j <= n - i; j++) {
        cout << " ";
      }
      // printing left half.
      char ch = 'A';
      for (int j = 1; j <= i; j++) {
        cout << ch++;
      }
      ch = ch - 2;
      while (ch >= 'A') {
        cout << ch;
        ch--;
      }
      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printSymmetricAlphabetPyramid(n);
    return 0;
}