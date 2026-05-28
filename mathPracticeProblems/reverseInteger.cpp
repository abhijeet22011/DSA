#include<iostream>
using namespace std;

int reverseInteger(int num){
    long long rev = 0;
    while(num != 0){
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
        if(rev > INT_MAX || rev < INT_MIN) return 0;
    }
    return rev;
}

int main(){
    int num ;
    cout << "Enter a number :";
    cin >> num;
    cout << reverseInteger(num);
}
