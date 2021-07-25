#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    int sum = 0;

    for (int i =0; i<N; i++){
        if(i+1 > A){
            sum += Y;
        }else{
            sum += X;
        }
    }

    cout << sum << endl;
    
}