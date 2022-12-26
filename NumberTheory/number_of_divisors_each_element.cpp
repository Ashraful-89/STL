#include<bits/stdc++.h>
using namespace std ;
vector<int> v[123];
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    for(int i = 1; i <= n ; i++) {
        int sq = sqrt(i);
        for(int j = 1 ; j <= sq; j++) {
            if(i % j == 0) {
                v[i].push_back(j);
                if(i / j != j) v[i].push_back(i/j);
            }
        }
    }
    
    for( int i = 1 ; i <= n ; i++) {
        cout << i << " : ";
        sort(v[i].begin() , v[i].end());
        for(auto a : v[i]) cout << a << " ";
        cout << endl;
    }
    return 0;
}
