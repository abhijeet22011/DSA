#include<iostream>
using namespace std;

void printHollowDiamond(int n) {
        // Implement the pattern printing logic here
        //part 1
        for(int r=1;r<=n;r++){
            for(int c=1;c<=n-r;c++){
                cout<<" ";
            }
            if(r==1) cout<<"*";
            else{
                cout<<"*";
                for(int c=1;c<=2*(r-1)-1;c++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<"\n";
        }
        n--;//part 2
        for(int r=1;r<=n;r++){
            for(int c=1;c<=r;c++){
                cout<<" ";
            }
            if(r==n) cout<<"*";
            else{
                cout<<"*";
                for(int c=1;c<=2*(n-r)-1;c++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<"\n";
        }
}

int main(){
    int n; cin >> n;
    printHollowDiamond(n);
    return 0;
}