#include<iostream>
#include<vector>
using namespace std;

pair<int, int> sumOfPositiveNegative(vector<int>& arr) {
    int positiveSum = 0, negativeSum = 0;
    for (int num : arr) {
        if (num > 0) {
            positiveSum += num;
        } else if (num < 0) {
            negativeSum += num;
        }
    }
    return {positiveSum, negativeSum};
}

int main() {
    vector<int> arr = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };

    pair<int, int> result = sumOfPositiveNegative(arr);
    cout << "Sum of Positive Numbers: " << result.first << endl;
    cout << "Sum of Negative Numbers: " << result.second << endl;

    return 0;
}