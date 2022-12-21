#include<bits/stdc++.h>
using namespace std ;

int main() {
    // pair < int , int > p;
    // p.first = 2;
    // p.second = 7;
    // cout << p.first << " " ;
    // cout << p.second << " ";

    // Or
    // pair < string , int > p;
    // p.first = "Ashraful Islam";
    // p.second = 2010986141;
    // cout << p.first << " " << p.second << " ";

    pair < string , vector < string > > p;

    p.first = "ashraful";
    p.second = {"naim","akash", "Fariha" , "nasir"};

    cout << p.first << " : ";
    for(auto s : p.second) cout << s << " " ;
    
    return 0;
}