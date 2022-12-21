#include<bits/stdc++.h>
using namespace std ;

int main(void) {

    set < string> str;
    int n; cout << "Enter n : ";
    cin >> n;
    string s;
    for(int i = 0 ; i < n; i++)
     {
        cin >> s;
        str.insert(s);
     }
     cout << str.size() << endl;
     for(auto t : str) {
        cout << t << endl;
     }
    return 0;
}