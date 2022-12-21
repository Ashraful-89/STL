#include<bits/stdc++.h>
using namespace std ;

int main(void) {
    vector <int> v;
    int n;
    while(1) {
        cin >> n ;
        if(n == 0) break;
        v.push_back(n);
    }
    cout << "The vector elements are : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin() + 4 ,v.end());
    cout << "After the sorting , The vector elements are : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}