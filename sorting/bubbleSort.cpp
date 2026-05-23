#include<iostream>
#include<vector>
using namespace std;

// Brute Force approach:

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1])
               swap(arr[j],arr[j + 1]);
        }
    }
}



// Optimized version (stop early if no swaps):

/*
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int didSwap = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
               swap(arr[j],arr[j + 1]);
               didSwap = 1;
            }       
        }
        if(didSwap == 0) break;
    }
}
*/



int main(){
    vector<int> nums = {21,1,2,33,44,20,0};
    bubbleSort(nums);
    for(int n:nums) {
        cout << n << " ";
    }
    return 0;
}