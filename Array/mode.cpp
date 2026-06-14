#include<iostream>
#include<vector>
using namespace std;

int mode(vector<int>& arr) {
    int maxCount = 0, modeValue = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }
    return modeValue;
}

int main() {
    vector<int> arr = { 1, 2, 3, 2, 4, 5, 2 };

    int result = mode(arr);
    cout << "Mode: " << result << endl;

    return 0;
}