#include<bits/stdc++.h>
using namespace std ;

int main(void) {

    // create vector 
    vector < int > v , t;
    // inserted the element of the vector 
    
    int n;
    cout << "Enter n : "; cin >> n;
    for(int i = 1; i <= n ; i++) {
        v.push_back(i);
    }

    // find the size of the vector

    int size = v.size();
    cout << "Size of the vector : " << size << endl;

    // print the element of the vector using for each loop

    // for(auto i : v) {
    //     cout << i << " ";    // 1 2 3 4 5
    // }

    // Print element using for loop
    // int sum = 0;
    // for(int i = 0; i < size ; i++) {
    //     // cout << v[i] << " " ;
    //     sum += v[i];      // same to array
    // }

    // print element of the vector using begin() function 
    cout << "\nThe element of the copy vector : ";
    for(auto it = v.begin() ; it != v.end() ; ++it) 
        cout << *it << "  ";

    // copy the vector 
    cout << "\nThe element of the copy vector : ";
    t = v;
    for(auto i : t) {
        cout << i << " ";
    }

    // cout << "\nThe sum of the vector is : " << sum << endl;
    return 0;
}