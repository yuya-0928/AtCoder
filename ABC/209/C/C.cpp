#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    vector<long long> C(N);
    for (long long i=0; i<N; i++) cin >> C.at(i);

    long long MOD = 1000000007;
    long long sum = 0;
    for (long long i = 0; i<N; i++){
        if (i==0){
            sum += C.at(0);
        // }else if(C.at(i) - i == 0){
        //     sum += 1;
        }else{
            sum = sum * (C.at(i) - i) % MOD;
        }
    }
    cout << sum << endl;
}