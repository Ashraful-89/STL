#include<bits/stdc++.h>
using namespace std;
bool prime[90000001];
int number = 500000;
vector <int> v;

int main() {
    for(int i = 2 ; i * i < number ; i++) {
        if(prime[i] == false) {
            for(int j = i * i ; j <= number ; j = j + i) {
                prime[j] = true;
            }
        }

    }
    for(int i = 2 ; i < number; i++) {
        if(prime[i] == false) {
            v.push_back(i);
        }
    }
    int tc; cin>> tc;
    for(int j = 0 ; j < tc ; j++) {
        int n;
        // cout << "Enter the kth position whose position of prime number is search : ";
        cin >> n;
        cout << v[n-1] << endl;
    }
    
    return 0;
}