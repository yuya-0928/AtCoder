#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    string ans;
    cin >> A >> B;

    for(int i=0; A>i; i++){
        if(B>=6){
            B-=6;
        }else if(B>=5){
            B-=5;
        }else if(B>=4){
            B-=4;
        }else if(B>=3){
            B-=3;
        }else if(B>=2){
            B-=2;
        }else if(B>=1){
            B-=1;
        }
    }


    if(B<=0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}