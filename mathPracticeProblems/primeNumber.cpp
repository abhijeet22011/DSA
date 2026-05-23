#include<iostream>
using namespace std;

string isPrime(int num) {
        if(num<=1) return "No";
        for(int i=2;i<num;i++){
            if(num%i==0) return "No";
        }
        return "Yes";
}

int main(){
    int num;
    cout << "Enter a number :";
    cin >> num;
    cout << isPrime(num);

    return 0;
}
