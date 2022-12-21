#include<bits/stdc++.h>

using namespace std;

int main(void) {
    string s = "ashraful";
    // sort
    sort(s.begin(),s.end());
    cout << s << " and size is : " << s.size() << endl;
    // unique

    int size = unique(s.begin() , s.end()) - s.begin();
    cout << size << endl;
    // Unique char print after sorted the string

    string :: iterator it;

    for(it = s.begin() ; it != s.end() ; ++it){
        cout << *it;
    }

    // find the maximum char

    char ch = *max_element(s.begin() , s.end());
    cout << " The maximum char is : " << ch << endl; 

    ch = *min_element(s.begin() , s.end());
    cout << ch << endl;

    s.erase(s.begin()); // deleted the first element

    cout << s << endl;

    return 0;
}