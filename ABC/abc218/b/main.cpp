#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> P(30);

    for(int i=0; i<26; i++){
      cin >> P.at(i);
    }

    for(int i=0; i<26; i++){
      printf("%c", 96 + P.at(i));
    }
    cout << endl;
    
}