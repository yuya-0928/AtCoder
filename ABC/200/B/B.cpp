#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    // 以下の操作をK回行った後の整数Nを出力してください。

    // 整数Nが200の倍数であれば、Nを200で割る

    //そうでなければ、整数Nを、Nの後ろに文字列として200を付け加えた整数に置き換える
    // N=7, 7200

    long long N;
    int K;
    string numString;
    cin >> N >> K;

    for (int i=0; i<K; i++){
        if (N%200 == 0){
            N /= 200;
        }else{
            numString = to_string(N);
            numString += "200";
            N = strtol(numString.c_str(), NULL, 10);
        }
    }

    cout << N << endl;
}