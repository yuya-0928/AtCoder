#include <bits/stdc++.h>
using namespace std;

int main(){
    // NとMの取得
    int N , M;
    cin >> N >> M;

    // AとBを配列で取得
    vector<int> C(M+1);
    int sum =0;
    // A, Bの入力値を参考に、都市Cを配列にならべる
    for (int i=0; i<M; i++){
        cin >> C[i] >> C[i+1];
    }

    // M=0なら、Nの値を出力して終了
    if (M==0){
        sum = 0;
        cout << sum << endl;
        exit(0);
    }

    // 組み合わせが循環していたら、N * Nを実行して終了
    if (C[0]==C[C.size()-1]){
        sum = N* N;
        cout << sum << endl;
        exit(0);
    }

    // (1 1), (2 2)などx=yの組み合わせを予め足しておく
    sum += N;

    // i, jで２重にfor文を回す。iは固定し、jはこれまでのjに入った数値とかぶらないようにする
    // N-1回目のときに、C[i]の値がC[0]と同じだったら、すべての通りで計算(N * N)
    for (int i=0; i<N; i++){
        int x = C[i];
        vector<int> y;
        for (int j=0; j<N+1 && C[i+1+j]!=0; j++){
            if (x!=C[i+1+j]){
                y.push_back(C[i+1+j]);
            }
        }

        sort(y.begin(), y.end());
        y.erase(unique(y.begin(), y.end()), y.end());
        sum += y.size();
    }
    cout << sum << endl;

}