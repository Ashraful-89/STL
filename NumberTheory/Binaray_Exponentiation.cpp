#include<bits/stdc++.h>
using namespace std;

long long int Binary_Exponentiation(long long int b , long long int p ) {
    long long result = 1;
    while(p) {
        if(p % 2 == 1) {
            result = result * b;
            p--;

        }
        else {
            b = b * b;
            p = p / 2;
        }
    }
    return result ;
}


int main() {
    long long int base , power;
    cout << "Enter the base and power : "; cin >> base >> power;
    long long int result = Binary_Exponentiation(base,power);
    cout << result << endl;
    return 0;
}