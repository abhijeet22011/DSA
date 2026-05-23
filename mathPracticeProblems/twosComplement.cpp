#include <iostream>
using namespace std;

string twosComplement(string bin) {
    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1') {
            for(int j = i - 1; j >= 0; j--) {
                if(bin[j] == '0')
                    bin[j] = '1';
                else
                    bin[j] = '0';
            }
            break;
        }
    }
    return bin;
}

int main() {
    string bin;
    cout << "Enter number in binary : ";
    cin >> bin;

    cout << twosComplement(bin);

    return 0;
}