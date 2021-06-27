#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> tlr(N, vector<int>(3));

    for (int i=0; i<N; i++){
        for (int j=0; j<3; j++){
            cin >> tlr.at(i).at(j);
        }
    }

    int count =0;
    bool dudu = true;
    
    for (int i=0; i<N-1; i++){
        for (int j=0+i; j<N; j++){
            // tlr.at(i) と　tlr.at(i+1)を比較
            if(tlr.at(i).at(2) > tlr.at(i+1).at(1) || tlr.at(i+1).at(2) > tlr.at(i).at(1)){
                // 同じ数値の重なりがある場合
                if(tlr.at(i).at(2) == tlr.at(i+1).at(1) || tlr.at(i+1).at(2) == tlr.at(i).at(1) ){
                    
                    // 数値が同じで大なりイコールの関係で重なりがある場合
                    if (tlr.at(i).at(2) == 1 || tlr.at(i).at(2) == 3){
                        if (tlr.at(i+1).at(1) == 1 || tlr.at(i+1).at(1) == 3){
                            // OK
                        }else{
                            dudu = false;
                        }
                    }
                    if (tlr.at(i+1).at(2) == 1 || tlr.at(i+1).at(2) == 3){
                        if (tlr.at(i).at(1) == 1 || tlr.at(i).at(1) == 3){
                            // OK
                        }else {
                            dudu = false;
                        }
                    }
                    
                    if (dudu==true){
                        count ++;
                        // dudu = false;
                    }else {
                        dudu = true;
                    }
                }    
            }
        }
    }

    cout << count << endl;
}