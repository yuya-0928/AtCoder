#include <bits/stdc++.h>
using namespace std;

int main(){
    // 0 グー 1 チョキ 2 パー
    int x, y;
    
    cin >> x >> y;

    if (x == y){
        cout << x << endl;
    }else if ( x+y == 2 ){
        // 0 2, 1,2
        if (x == 0 || y == 0){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }else if (x+y==1){
        // 0 1
        cout << 2 << endl;
    }else if (x+y==3){
        // 1 2
        cout << 0 << endl;
    }
    return 0;
}