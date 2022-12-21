#include<bits/stdc++.h>
using namespace std;
 bool prime(int n) {
    for(int i = 2 ; i < sqrt(n) ; i++) {
        if(n % i == 0) return false;
    }
    return true;
 }
int main() {
    int number;
    cout << "Enter the Number whose we check the Prime number : "; cin >> number;
    bool flag = prime(number);

    if(flag) {
        cout << number << " is a Prime : ";
    }
    else {
        cout << number << " is not the prime :" ;
        }
}