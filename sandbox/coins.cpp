// 出てくるコインは10円玉、50円玉、100円玉、500円玉。
// 1000円札を入れると、これらのコインを好きな組み合わせで両替できる。
// ただしコインの枚数の合計は15枚以内でないとだめ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int count = 0;
    int N = 15;

    // 500円玉が2枚の場合は、必ず500x2なので、500円を10円玉、50円玉、100円玉で両替する場合を考える
    // 試行回数は、そのコインで500円を作るMAXの値にする
    for(int i=0; 50>= i; i++){
        for(int j=0; 10>=j; j++){
            for(int z=0; 5>=z; z++){
                sum = 10*i + 50*j + 100 * z;
                if(sum==500){
                    count++;
                    // cout << sum << endl;
                }
            }
        }
    }
    // 500円x2のパターンを最後に足す
    cout << count++ << endl;
}