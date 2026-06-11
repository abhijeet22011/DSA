#include<iostream>
#include<vector>
using namespace std;

void rightShiftByOnePosition(vector<int>& arr) {
    if (arr.empty()) return; // Handle empty array case

    int lastElement = arr.back(); // Store the last element
    for (int i = arr.size() - 1; i >= 0; --i) {
        if(i != 0) {
            arr[i] = arr[i - 1]; // Shift elements to the right
        }
        else {
            arr[i] = lastElement; // Place the last element at the first position
        }
    }
}

int main() {
    vector<int> arr ;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    rightShiftByOnePosition(arr);
    
    cout << "Array after right shift by one position: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}