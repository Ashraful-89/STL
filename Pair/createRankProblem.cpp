#include<bits/stdc++.h>
using namespace std;
int main() {

    // take input and output using for each loop 


    // int n;
    // cin >> n;
    // int array[n];
    // for(int &a : array) cin >> a;

    // cout << "Element of this array : ";
    // for(int i = 0 ; i < n; i++) cout << array[i] << " ";

    int n; cin >> n;
    vector<int>arr(n);
    for(int &a: arr) cin >> a;
    vector<int>bag[n+1];
    for(int i = 0; i < n; i++){
        bag[arr[i]].push_back(i+1);
    } 
    for(int i = 1; i <= n; i++){
        cout << i << " ";
        for(auto A: bag[i]){
            cout << A <<" ";
        }
        cout << endl;
    }   
}