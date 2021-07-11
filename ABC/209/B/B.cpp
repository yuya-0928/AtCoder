#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, X;
    cin >> N >> X;
    vector<long long> A(N);
    for (int i=0; i<N; i++) cin >> A.at(i);

    // 商品の合計金額
    long long sum = 0;

    for (int i=0; i<N; i++){
        if ((i+1)%2 == 0){
            A.at(i) -= 1;
        }
        sum += A.at(i);
    }
    
    if (X >= sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}