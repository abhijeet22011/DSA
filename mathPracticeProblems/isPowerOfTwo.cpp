#include<iostream>
#include<string>
using namespace std;

string isPowerOfTwo(int num){
    string ans = (num > 0 && (num & (num - 1)) == 0) ? "Yes" : "No";

    return ans;
}

int main(){
    int num;
    cout << "Enter a number :";
    cin >> num;
    cout << isPowerOfTwo(num);

    return 0;
}