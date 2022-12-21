#include<bits/stdc++.h>
using namespace std ;

int main() {
    string s = "Ashraful";
    reverse(s.begin() , s.end());
    cout << s << endl;
    string s1 = "Ashraful";
    if(s == s1) cout << "Pelindrom" << endl;
    else cout << " Not Pelindrome " << endl;

    return 0;
}