#include<iostream>
using namespace std;

void printReverseAlphabetTriangle(int n) {
    for (int i = 1; i <= n; i++) {
      
      for (int j = 1; j <= n - i; j++) {
        cout << " ";
      }
      char ch = 'A' + n - i;
      for (int j = 1; j <= i; j++) {
        cout << ch++;
      }

      cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printReverseAlphabetTriangle(n);
    return 0;
}