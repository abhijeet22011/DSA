#include <iostream>
using namespace std;

void printSolidRectangle(int n, int m) {
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << "*"<< " ";
            }
            cout << endl;
        }
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    printSolidRectangle(n, m);
    return 0;
}