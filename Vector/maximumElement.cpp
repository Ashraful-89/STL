#include<bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {40, 20, 100, 40, 50};
    vector<int> :: iterator it;
    it = max_element(v.begin(),v.end());
    cout << *it << endl;
    it = min_element(v.begin(),v.end());
    cout << *it << endl;
    int indexOfMaxElement = max_element(v.begin(),v.end()) -  v.begin();
    int indexOfMinElement = min_element(v.begin(),v.end()) -  v.begin();
    cout << indexOfMaxElement << endl;
    cout << indexOfMinElement << endl;
    return 0;
}