#include<iostream>
using namespace std;

string isPalindrome(int num) {
    int original_number = num;
    int reverse = 0;
    while (num != 0) {
      int last_digit = num % 10;
      reverse = reverse * 10 + last_digit;
      num = num / 10;
    }
    if (original_number == reverse)
      return "Yes";
    else
      return "No";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Is the number a palindrome ? " << isPalindrome(num) << endl;
    return 0;
}

