#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printExtremeElements(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    bool printLeft = true;
    while(left <= right){
        if(printLeft){
            cout << arr[left++] << " ";
            printLeft = false;
        } else {
            cout << arr[right--] << " ";
            printLeft = true;
        }
    }
}

int main() {
    vector<int> arr = { 1, 3, 2, 4, 5 };

    printExtremeElements(arr);

    return 0;
}