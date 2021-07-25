#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> S(4);
    cin >> S.at(0) >> S.at(1) >> S.at(2) >> S.at(3);

    map<string, int> ss;
    for (int i=0; i<4; i++){
        if (S.at(i) == "2B"){
            ss["2B"]++;
        }
    }

    for (int i=0; i<4; i++){
        if (S.at(i) == "3B"){
            ss["3B"]++;
        }
    }

    for (int i=0; i<4; i++){
        if (S.at(i) == "HR"){
            ss["HR"]++;
        }
    }

    for (int i=0; i<4; i++){
        if (S.at(i) == "H"){
            ss["H"]++;
        }
    }

    if (ss["H"] == 1 && ss["HR"] == 1 && ss["3B"] == 1 && ss["2B"] == 1){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}