#include<iostream>
using namespace std;

 int reverseNumber(int num) {
        int reverse = 0;
        while(num!=0){
            int last_digit = num % 10;
            reverse = reverse*10 + last_digit;
            num = num / 10;
        }
        return reverse;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}