// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int x) {
//     int left = 0;
//     int right = n - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         // Check if x is present at mid
//         if (arr[mid] == x)
//             return mid;

//         // If x is greater, ignore left half
//         if (arr[mid] < x)
//             left = mid + 1;
//         // If x is smaller, ignore right half
//         else
//             right = mid - 1;
//     }

//     // If we reach here, then the element was not present
//     return -1;
// }

// int main() {
//     int arr[] = {2, 3, 4, 10, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 10;
//     int result = binarySearch(arr, n, x);
//     if (result != -1)
//         cout << "Element is present at index " << result << endl;
//     else
//         cout << "Element is not present in array" << endl;
//     return 0;
// }


// Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.
// using binary search algorithm, the time complexity is O(log n) and the space complexity is O(1).


// using built-in function in C++17, we can use std::binary_search from the <algorithm> header. Here's how you can implement it:

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    bool answer = binary_search(arr, arr + n, x);
    if (answer)
        cout << "Element is present in array" << endl;
    else
        cout << "Element is not present in array" << endl;
    return 0;
}
