//742A problem of codeforce
#include<bits/stdc++.h>
#define ll long long;
#define fr(i,n)  for(int i = 0; i < n ; i++);



using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 0) {
        cout << "1" << endl;
    }
    else if(n % 4 == 0) {
        cout << "6" << endl;
    }
    else if(n % 4 == 1) {
        cout << "8" << endl;
    }
    else if(n % 4 == 2) {
        cout << "4" << endl;
    }
    else if(n % 4 == 3) {
        cout << "2" << endl;
    }
    return 0;
}

// #define mod 1000000007
// using namespace std;
// long long int Binary_Exponentiation(long long int base, long long int n) {
//     long long result = 1;
//     while(n) {
//         if(n % 2 == 1) {
//             result = (result * base) % mod;
//             n--;
//         }
//         else {
//             base = base * base;
//             n = n / 2;
//         }
//     }
//     return result;
// }

// int main() {
//     long long n;
//     cout << "Enter the number ";
//     cin >> n;
//     long long result = Binary_Exponentiation(8,n);
//     int ans =  result;
//     cout << ans << endl;
//     return 0;
// }