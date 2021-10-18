#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  N = N * 2;
  vector<string> gcp(N);
  vector<int> pl(N);
  vector<vector<int>> A(N, vector<int>(1));

  for (int i =0; i<2*N; i++){
    cin >> gcp.at(i);
  }

  // 3ラウンド行う
  for (int i=0; i<M; i++){
    // get_winner( );
  }

  

}

char get_winner(char a, char b){
  if (a == 'G' && b == 'C' || a == 'C' && b == 'P' || a == 'P' && b == 'G'){
    return 'a';
  }else if (b == 'G' && a == 'C' || b == 'C' && a == 'P' || b == 'P' && a == 'G'){
    return 'b';
  }else if (a == b){
    return 'n';
  }
}