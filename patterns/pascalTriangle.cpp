#include<iostream>
using namespace std;

void printPascalsTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        int val = 1;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j);
       }
        cout << endl;
    }
} 

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPascalsTriangle(n);
    return 0;
}
