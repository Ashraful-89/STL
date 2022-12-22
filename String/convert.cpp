#include<bits/stdc++.h>
using namespace std;

int main() {

    string s = "Ashraful";
    // to conver Upper case

    for(int i = 0; i < s.size() ; i++) {
        if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;

    // to convert lower case

    for(int i = 0; i < s.size() ; i++) {
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }

    cout << s << endl;

    // to check a 
    string m = "Manobi";
    m.erase(m.begin()+2 , m.begin()+5);
    cout << m << endl;
    bool a  = s.find('x');
    cout << a << endl;

    return 0;
}