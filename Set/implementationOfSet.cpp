#include<bits/stdc++.h>
using namespace std ;

int main(void) {
    set < int > s = { 1 , 2 , 3, 4, 5, 4 , 5 , 10 , 7 , 9};

    int size = s .size();
    cout << "The Size of the set is : "; cout << size << endl;

    // s.clear();  //clear the set 

    // print the value 
    for(auto i : s)  cout << i << " ";
    cout << endl;

    // // print using iteration
    set < int > :: iterator balu;
    // for(balu = s.begin() ; balu != s.end() ; balu++) {
    //     cout << *balu << " ";
    // }

    s.insert(10);
    s.insert(29);
    s.insert(21);
    cout << "After some data insert the data the value of set are : ";
    for(balu = s.begin() ; balu != s.end() ; balu++) {
        cout << *balu << " ";
    }
    // empty check 

    // s.clear();
    // bool flag = s.empty();
    // cout << endl << flag ;
    return 0;
}