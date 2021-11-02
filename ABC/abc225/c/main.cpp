#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int N,M; cin >> N >> M;
    
    vector<vector<int>> B(N,vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++) cin >> B[i][j];
    }
    
    // 何行目か、何列目かを特定する作業
    vector<vector<int>> x(N,vector<int>(M)),y(N,vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            x[i][j] = (B[i][j]+6)/7;
            y[i][j] = (B[i][j]-1)%7+1;
        }
    }
    
    string ans = "Yes";
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(0 < i && x[i][j] != x[i-1][j]+1) ans = "No";
            if(0 < j && y[i][j] != y[i][j-1]+1) ans = "No";
            if(0 < j && x[i][j] != x[i][j-1]) ans = "No";
            if(0 < i && y[i][j] != y[i-1][j]) ans = "No";
        }
    }
    cout << ans << endl;
}