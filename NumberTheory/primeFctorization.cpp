#include<bits/stdc++.h>
using namespace std ;

void primeFactorization(int number) {
    for(int i = 2; i < number ; i++) {
        int cnt = 0;
        if(number % i == 0) { 
              while(number % i == 0) {
                number /= i;
                cnt++;
              }
              cout << i << " ^ " << cnt << endl;
        } 
         
    }
}

int main() {
    int n;
    cout << "Enter the number for found the prime factorization : "; cin >> n;
    primeFactorization(n);
    return 0;
}