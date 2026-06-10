// You are given an array of integers where each element appears twice, except for one distinct element that appears only once.
// Your task is to identify and return this unique element. 
// Implement an efficient solution that operates in linear time complexity with constant additional space.

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement( vector<int>& arr ) {
    int uniqueElement = 0;

    // XOR all elements in the array
    for (int num : arr) {
        uniqueElement ^= num; // XOR operation
    }

    return uniqueElement; // The result will be the unique element
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int uniqueElement = findUniqueElement(arr);
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}