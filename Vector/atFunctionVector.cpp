#include<bits/stdc++.h>
using namespace std;

int main() {
    vector < char > ch {'a','b','c','d','e','f'};
    cout << "All character are : ";
    for(auto it : ch) {
        cout << it << " ";
    }
    // cout << "\n The first element of vector is : " << ch.at(2);


    cout << "\nThe first element using front function : " << ch.front();
    cout << "\nThe last element using back function : " << ch.back();

    return 0;
}