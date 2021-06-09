#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> N(3);
  int a, b, c;
  int dice[6] = {0, 0, 0, 0, 0, 0};

  cin >> a >> b >> c;

  int du = 0;
  int uni = 0;
  
  dice[a-1] = a;
  if (dice[b-1]==0){
      dice[b-1] = b;
    //   uni = b;
  }else {
      du = b;
  }

  if (dice[c-1]==0){
      dice[c-1] = c;
    //   if (uni != c){
    //       uni = c;
    //   }
  }else {
      du = c;
  }
//   for (int i=0; i<6; i++){
//       if (i>0){
//           cout << " " ;
//       }
//       cout << dice[i];
//   }

  if (du == 0){
      cout << 0 << endl;
  }else if (uni == 0){
      cout << du << endl;
  }else {
    for (int i=0; i<6; i++){
        if (dice[i] != 0 && dice[i] != du){
            cout << dice[i] << endl;
        }
    }
  }
  cout << endl;
  cout << "du" << du << endl;
  cout << "uni" << uni << endl;
}