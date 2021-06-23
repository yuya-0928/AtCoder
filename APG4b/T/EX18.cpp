#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)

  // 試合参加者の人数 N
  // 試合回数 M
  vector<vector<char>> Match(N, vector<char>(N));
  
  for (int i=0; i<M; i++){
      Match.at(A.at(i)-1).at(B.at(i)-1) = 'o';
      Match.at(B.at(i)-1).at(A.at(i)-1) = 'x';
  }

  for (int i =0; i<N; i++){
    for (int j=0; j<N; j++){
      if (Match.at(i).at(j)=='o' || Match.at(i).at(j)=='x' ){
          cout << Match.at(i).at(j);
      }else{
          cout << '-';
      }
      if (j==Match.at(i).size()-1){
          cout << endl;
      }else{
          cout << " ";
      }
    }
  }
}