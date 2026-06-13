#include<iostream>
#include<vector>
using namespace std;

// Function to transpose a matrix using an additional matrix.
vector<vector<int>> transposeOfMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<vector<int>> transposed(cols, vector<int>(rows));
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// In-place transpose for square matrix.
void inPlaceTranspose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    vector<vector<int>> transposed = transposeOfMatrix(matrix);
    
    cout << "Transposed Matrix:" << endl;
    for (const auto& row : transposed) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    inPlaceTranspose(matrix);
    
    cout << "In-place Transposed Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}