#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, P;
  cin >> N >> P;
  int fail = 0;

  int a;
  for (int i=0; i<N; i++){
    cin >> a;
    if (a < P){
      fail++;
    }
  }
  cout << fail << endl;
}