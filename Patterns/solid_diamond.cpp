#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    
    // Part 1
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout << " ";
        }
        for(int c=1;c<=2*r-1;c++){
            cout << "*";
        }
        cout << "\n";
    }
    n--;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout << " ";
        }
        for(int c=1;c<=2*(n-r)+1;c++){
            cout << "*";
        }
        cout << "\n";
    }
}