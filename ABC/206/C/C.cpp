#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<int> A(N);

    cin >> N;
    for(int i=0; i<N; i++) cin >> A.at(i);

    int count = 0;

    for (int i =0; i<N; i++){
        for (int j=0; j<N; j++){
            if (A.at(i) == A.at(j)){
                
            }else{
                count++;
            }
        }
    }

    cout << count/2 << endl;

}