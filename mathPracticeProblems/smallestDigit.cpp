#include<iostream>
using namespace std;

int smallestDigit(int num) {
        int smallest = INT_MAX ; // Initialize smallest to the maximum possible integer value
        while(num != 0){
           int lastdigit = num % 10;
           if(lastdigit < smallest) smallest = lastdigit;
           num = num / 10;
        }
        return smallest;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Smallest digit: " << smallestDigit(num) << endl;
    return 0;
}