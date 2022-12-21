#include<bits/stdc++.h>
using namespace std;
int main() {

    vector < pair <int , int > > v;
    int n;
    cout << "Enter n : " ; cin >> n;
    for(int i = 0; i < n; i++) {
        int x , y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    cout << "The value of vector of pair are : ";
    sort(v.begin(),v.end());
    for(auto s : v)  cout << s.first << " " << s.second << endl;

    return 0;
}