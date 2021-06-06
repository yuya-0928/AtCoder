#include <bits/stdc++.h>
using namespace std;
 
// int main() {
//     int N;
//     int b[110];
//     cin >> N;
//     for(int i = 0; i < N; i++){
//         cin >> b[i];
//     }

//     // cout << b << endl;

//     sort(b, b+N, greater<int>());
//     int sum = 1;
//     for (int x = 0; x < N -1; x++){
//         if (b[x] != b[x+1]){
//             sum++;
//         }
//     }
//     cout << sum << endl;
// }

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    int num[110] = {0};  // バケット
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;  // d[i] が 1 個増える
    }

    int res = 0;  // 答えを格納
    for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
        if (num[i]) {  // 0 より大きかったら
            ++res;
        }
    }
    cout << res << endl;
}