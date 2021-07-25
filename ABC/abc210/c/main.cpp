#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    vector<long long> C(N);

    // for (int i=0; i<N; i++) cin >> C.at(i);

    for(int i=0; i<N; i++) cin >> C.at(i);

    vector<long long> D(K);
    int max = 0;
    for (int i=0; i<N-K+1; i++){
        for(int j=0+i; j<K; j++){
            D.resize(K);
            D.at(j-i) = C.at(j);
        }
        sort(D.begin(), D.end());
        D.erase(unique(D.begin(), D.end()), D.end());
        if (max < D.size()){
            max = D.size();
        }
    }
    cout << max << endl;

}