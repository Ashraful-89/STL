#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cout << "Enter the size : ";
    cin >> n;
    vector<int> v;
    cout << "Enter the element : ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    map < int , int > frequency;
    for(auto u : v) frequency[u]++;

    cout << "The frequency : " << endl;
    for(auto u : frequency) {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}