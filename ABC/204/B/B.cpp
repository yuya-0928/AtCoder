#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int A[1010];
    int sum =0;
    // 木の本数を取得
    // 一本ずつ個数を確認
        // 10以下なら次の処理へ
        // 10以上なら、成っている個数-10を取得個数に追加
    
    cin >> N;
    for (int i=0; i<N; i++) cin >> A[i];
    
    for (int i=0; i<N; i++){
        if (A[i]>10){
            sum += A[i]-10;
        }
    }
    cout << sum << endl;


}