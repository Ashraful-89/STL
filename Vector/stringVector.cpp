#include<bits/stdc++.h>
using namespace std;

int main (void) {
    // vector< string > str {"ashraful","akash","joty","Risha"}; // initialization

    vector< string > str = {"ashraful","akash","joty","Risha"}; // Or initialization
    int size = str.size();
    cout << "The size of the string vector : " << size << endl;
    cout << "The first element are :" <<  *(str.begin()) << endl;


    // cout << "The last element are : " <<*(str.end()) << endl;   // not working 
    
    cout << "\nall value of vector are : ";
    for(auto it = str.begin() ; it != str.end() ; ++it) {
        cout << *it << " ";
    }


    str.pop_back();

    cout << "\nall value of vector are in the remove the last elemnt : ";
    for(auto it = str.begin() ; it != str.end() ; ++it) {
        cout << *it << " ";
    }
    return 0;
}