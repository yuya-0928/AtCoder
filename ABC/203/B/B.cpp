#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    int sum = 0;
    cin >> N >> K;
    for (int i=0; i<N; i++){
        // 階層ごとに処理を繰り返す
        for (int j = 0; j<K; j++){
            // 部屋数ごとに処理を繰り返す
            int floor = (i+1) * 100 ;
            int room = floor + (j+1);
            sum += room;
        }
    }
    cout << sum << endl;
}