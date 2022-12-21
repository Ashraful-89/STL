#include<bits/stdc++.h>
using namespace std;
void sieve(int n) {
    int prime[n];
    memset(prime,0,sizeof(prime));

    for(int i = 2 ; i * i <= n ; i++) {
        if(prime[i] == 0) {
             for(int j = i * i ; j < n ; j+=i) {
                prime[j] = 1;
             }
        }
       
    }
    for(int j = 2 ; j < n ; j++) {
        if(prime[j] == 0) {
            cout << j << " ";
        }
    }
    cout << endl;
}

int main () {
    int n;
    cout << "Enter the size of to found the prime number : "; cin >> n;
    sieve(n);
    return 0;
}