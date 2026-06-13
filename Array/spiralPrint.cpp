#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(vector<vector<int>>& arr) {
    int top = 0, bottom = arr.size() - 1;
    int left = 0, right = arr[0].size() - 1;

    cout << "Spiral Print: ";
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
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    spiralPrint(arr);

    return 0;
}