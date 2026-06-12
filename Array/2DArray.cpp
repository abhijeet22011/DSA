#include<iostream>
using namespace std;

void printArray(int arr[3][3]) {
    cout << "The 3x3 array is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rowTraversal(int arr[3][3]) {
    cout << "Row Traversal: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}

void columnTraversal(int arr[3][3]) {
    cout << "Column Traversal: ";
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            cout << arr[i][j] << " ";
        }
    }          
    cout << endl;
}

void zigZagTraversal(int arr[3][3]) {
    cout << "Zig-Zag Traversal: ";
    for (int i = 0; i < 3; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int j = 2; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void diagonalTraversal(int arr[3][3]) {
    cout << "Diagonal Traversal: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

void reverseDiagonalTraversal(int arr[3][3]) {
    cout << "Reverse Diagonal Traversal: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i][2 - i] << " ";
    }
    cout << endl;
}

void boundaryTraversal(int arr[3][3]) {
    cout << "Boundary Traversal: ";
    for (int j = 0; j < 3; j++) {
        cout << arr[0][j] << " ";
    }
    for (int i = 1; i < 3; i++) {
        cout << arr[i][2] << " ";
    }
    for (int j = 1; j < 3; j++) {
        cout << arr[2][j] << " ";
    }
    for (int i = 1; i < 2; i++) {
        cout << arr[i][0] << " ";
    }
    cout << endl;
}


void spiralTraversal(int arr[3][3]) {
    cout << "Spiral Traversal: ";
    int top = 0, bottom = 2, left = 0, right = 2;
    
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            cout << arr[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}



int main() {
    int arr[3][3];
    cout << "Enter the elements of the 3x3 array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    printArray(arr);
    rowTraversal(arr);
    columnTraversal(arr);
    zigZagTraversal(arr);
    diagonalTraversal(arr);
    reverseDiagonalTraversal(arr);
    boundaryTraversal(arr);
    spiralTraversal(arr);

    return 0;
}