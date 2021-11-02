#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B; cin >> A >> B;
  int z=A-B;
  int ans = 1;
  for(int i=0; i<z; i++){
    ans*=32;
  }
  cout << ans << endl;
}