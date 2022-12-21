#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int sum = 0 ;
        vector< int > v;
        vector< int > a;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            int operatiopn  = 0;
            if(x % 2 == 0) {
                while(x % 2 == 1) {
                    operatiopn++;
                    x /= 2;
                }
                a.push_back(operatiopn);
            }
            else {
                while(x % 2 == 0) {
                    operatiopn++;
                    x /= 2;
                }
                a.push_back(operatiopn);
            }
        }
        if(sum % 2 == 0 ) cout << "0" << endl;
        else {
            cout << *min_element(a.begin() , a.end()) << endl;
        }
    }
    return 0;
}