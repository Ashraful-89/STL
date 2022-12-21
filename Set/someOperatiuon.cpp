#include<bits/stdc++.h>
using namespace std;
int main() {
    set < int > s = { 1 , 4, 5, 2, 9 , 0};
    cout << s.count(10) << endl; // to check this value is present or not 

    // deleted the first element 

    s.erase(s.begin()); // 1 2  4 5 9

    // s.erase(s.begin()); // 2 4 5 9
    for(auto a : s) {
        cout << a << " ";
    }
    cout << endl;

    // deleted the last element 
    //s.erase(*(s.rbegin())) ; // 2 4 5
    s.erase(*(s.begin()) + 1);
     for(auto a : s) {
        cout << a << " ";
    }

    
    return 0;
}