#include <bits/stdc++.h>
using namespace std;

int main(){
  long a; // 水色の個数
  long a_red = 0; // 色の個数
  long b, c, d;
  // b 水色の追加個数
  // c 赤色の追加個数
  // d 何倍か
  cin >> a >> b >> c >> d;

  if (b >= c*d){
    cout << -1 << endl;
  }else{
    long count = 0;

    while (a > a_red*d ) {
      a += b;
      a_red += c;
      count++;
    }

    cout << count << endl;
  }

}