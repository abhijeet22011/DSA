#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result; // Return the indices of the two numbers
            }
        }
    }
    return result; // Return an empty vector if no solution is found
}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> indices = twoSum(nums, target);
    
    if (!indices.empty()) {
        cout << "Indices of the two numbers that add up to " << target << ": " 
             << indices[0] << " and " << indices[1] << endl;
    } else {
        cout << "No two numbers add up to " << target << "." << endl;
    }

    return 0;
}