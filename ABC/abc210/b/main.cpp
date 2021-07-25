#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    
    for (int i=0; i<N; i++){
        if(S[i] == '1'){
            if((i+1)%2==0){
                cout << "Aoki" << endl;
                break;
            }else{
                cout << "Takahashi" << endl;
                break;
            }
        }
    }
}