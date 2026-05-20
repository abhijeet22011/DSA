#include<iostream>
using namespace std;

void printRhombus(int n) {
        for(int r = 1; r <= n; r++){

            for(int c = 1; c <= n-r; c++){
                cout << " ";
            }
            for(int c = 1; c<= n; c++){
                cout << "* ";
            }
         cout << "\n";   
        }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printRhombus(n);
    return 0;
}