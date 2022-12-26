#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    multiset<int> s;
    int sq = sqrt(n);

    for(int i = 1; i <= sq ; i++) {
        if(n % i == 0) 
        {
            s.insert(i);
            if(n / i != i) s.insert(n / i);
        }
    }

    cout << "The devisors of " << n <<  " are : ";
    for(auto a : s ) cout << a << " ";
    return 0;
}