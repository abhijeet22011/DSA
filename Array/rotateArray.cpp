#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Method ==1

        // vector<int> temp;
        // for (int i = n - k; i < n; i++) {
        //     int value = nums[i];
        //     temp.push_back(value);
        // }
        // for (int i = n - 1; i >= 0; i--) {
        //     if (i - k >= 0) {
        //         nums[i] = nums[i - k];
        //     }
        // }
        // for (int i = 0; i < k; i++) {
        //     nums[i] = temp[i];
        // }
        
        // method ==2

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
}    

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotate(nums, k);
    
    cout << "Array after rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}