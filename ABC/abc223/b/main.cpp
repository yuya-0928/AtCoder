#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string max = s;
  string min = s;
  
  // 得られる文字列の通りは、英字の個数分通りである。abcdは4通り
  // 辞書順で最小のものと最大のものをどう見分けるか, ソートみたいなことをする？
  // 辞書順で、最小のものを出力っするさいには、N文字目からみて、N-1文字目が大きければ右シフト
  // 逆をやるなら、一番目と二番目をひかくして左シフト
  // S min[
  int length = s.length();
  while (min[length-1]<min[length-2] || min[length-1] ==min[length-2]){
    string min1 = {min[length-1]};
    min.pop_back();
    min.insert(0, min1);
  }
  cout << min << endl;


  // 先頭を確認するやつ
  //S max
  
  while (max[0]<max[1]){
    char max1 = max[0];
    max.erase(0,1);
    max.push_back(max1);
  }
  cout << max << endl;


}