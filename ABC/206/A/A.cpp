#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
    // ifstream in("tests/sample-1.in");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    N = N*1.08;

    if (N<206){
        cout << "Yay!" << endl;
    }else if (N == 206){
        cout << "so-so" << endl;
    }else if (N>206){
        cout << ":(" << endl;
    }

}
