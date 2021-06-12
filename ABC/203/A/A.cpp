#include <bits/stdc++.h>
using namespace std;

int main(){

  int a, b, c;
	cin >> a >> b >> c;
	if (a == b) cout << c << endl;
	else if (b == c) cout << a << endl;
	else if (c == a) cout << b << endl;
	else cout << 0 << endl;
	return 0;
  
  // int a, b, c;

  // cin >> a >> b >> c;

  // if (a == c && b == c){
  //   cout << a << endl;
  // }else if (a != c && b != c){
  //   if (a == b){
  //     cout << c << endl;
  //   }else{
  //     cout << 0 << endl;
  //   }
  // }else if (a != c && b == c){
  //   cout << a << endl;
  // }else if (a == c && a != b){
  //   cout << b << endl;
  // }
}