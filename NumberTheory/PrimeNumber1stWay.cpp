#include<bits/stdc++.h>
using namespace std ;

bool prime(int n) {
    for(int i = 2 ; i < n - 1; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main () {
    int number;
    cout << "Enter the number whose we wnat to check Prime or not : ";
    cin >> number;
    bool flag = prime(number);

    if(flag) {
        cout << number << " is prime ";
    }
    else {
        cout << number << " is not prime ";
    }
    return 0;
}