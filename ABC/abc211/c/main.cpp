#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    string word = "chokudai"; 
    int sum = 0;

    string S_reversed(S);

    reverse(S_reversed.begin(), S_reversed.end());

    while(S.length()>=8){
        int start = S.find("chokudai");
        S = S.erase(start, 8);
        cout << S << endl;
        cout << "chokudai is here"<<S.length() << endl;
    }
    cout << sum << endl;

    S = word;
    while(S.length()>=8){
        int start = S.find("chokudai");
        S = S.erase(start, 8);
        cout << S << endl;
        cout << "chokudai is here"<<S.length() << endl;
    }
    
}