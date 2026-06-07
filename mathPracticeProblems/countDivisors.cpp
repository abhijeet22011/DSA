#include<iostream>
using namespace std;

int countDivisors(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of divisors: " << countDivisors(num) << endl;
    return 0;
}