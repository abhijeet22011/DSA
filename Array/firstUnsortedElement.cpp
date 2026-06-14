#include<iostream>
#include<vector>
using namespace std;

int firstUnsortedElement(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return arr[i];
        }
    }
    return -1; // Return -1 if the array is fully sorted
}

int main() {
    vector<int> arr ;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }   

    int result = firstUnsortedElement(arr);
    if (result != -1) {
        cout << "First Unsorted Element: " << result << endl;
    } else {
        cout << "The array is fully sorted." << endl;
    }

    return 0;
}