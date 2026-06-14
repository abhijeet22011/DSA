#include<iostream>
#include<vector>
using namespace std;

pair<int, int> highestAndLowestFrequency(vector<int>& arr) {
    int highestFreq = 0, lowestFreq = arr.size();
    int highestValue = arr[0], lowestValue = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > highestFreq) {
            highestFreq = count;
            highestValue = arr[i];
        }
        if (count < lowestFreq) {
            lowestFreq = count;
            lowestValue = arr[i];
        }
    }
    return {highestValue, lowestValue};
}

int main() {
    vector<int> arr = { 1, 2, 3, 2, 4, 5, 2, 6 };

    pair<int, int> result = highestAndLowestFrequency(arr);
    cout << "Element with Highest Frequency: " << result.first << endl;
    cout << "Element with Lowest Frequency: " << result.second << endl;

    return 0;
}