#include<iostream>
#include<cmath>
using namespace std;

string isNarcissistic(int num) {
    int sum = 0;
    int temp = num;
    int digits = 0;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num; // Reset temp to the original number

    // Calculate the sum of the digits raised to the power of the number of digits
    while (temp != 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, digits);
        temp /= 10;
    }

    return (sum == num) ? "Yes" : "No";
}