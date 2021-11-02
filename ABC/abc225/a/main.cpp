#include <bits/stdc++.h>
using namespace std;

// int main(){
  
//   string S; cin >> S;
//   int ans = 3;
//   if(S.at(0)==S.at(1) && S.at(1)==S.at(2)){
//     ans = 1;
//   } else if (S.at(0)!=S.at(1) && S.at(1)!=S.at(2) && S.at(2)!=S.at(0)) {
//     ans = 6;
//   }

//   cout << ans << endl;

// }

int main(){
  string S; cin >> S;
  sort(S.begin(), S.end());
  set<string> s;

  do{
    s.insert(S);
  }while(next_permutation(S.begin(), S.end()));
  cout << s.size() << endl;
}