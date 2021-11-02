#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T; cin >> S >> T;
  int diff = 0;
 
  if (S!=T){
    for(int i=0; i<S.length()-1; i++){
       if(S.at(i)!=T.at(i)){
         if(S.at(i)!=T.at(i+1) || S.at(i+1)!=T.at(i)){
           cout << "No" << endl;
           return 0;
         } else {
           cout << "Yes" << endl;
           return 0;
         }
       }
    }
  } else {
    cout << "Yes" << endl;
    return 0;
  }
  
}