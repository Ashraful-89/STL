#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset < int > s;
    int n;
    cout << "Enter the number of element : " ; cin >> n;
    for(int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "The element of the multiset : ";
    for(auto a : s) cout << a << " ";
    cout << endl;
    // count 

    int a = s.count(1);
    cout << a << endl;

    // erase any element but deleted the all same element

    s.erase(1);
    for(auto a : s) cout << a << " ";
    cout << endl;


    // deleted the first elemnt 

    auto it = s.find(2);
    s.erase(it);
    cout << "after deleted the  2 number element: ";
    for(auto a : s) cout << a << " ";
    cout << endl;

    return 0;
}