#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i=0; i<s.size(); i++){
        if(s[i]==','){
            s[i] = ' ';
        }
    }

    cout << s << endl;

}