#include<iostream>
using namespace std;

string checkEvenOdd(int num) {
        if(num%2==0) return "Even";
        else return "Odd";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << " is " << checkEvenOdd(num) << endl;
    return 0;
}