#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ab = a - b;
    int ac = a - c;
    int ba = b - a;
    int bc = b - c;
    int ca = c - a;
    int cb = c - b;

    if (ab == bc){
        cout << "Yes" << endl;
    }else if (ac == cb){
        cout << "Yes" << endl;
    }else if (ba == ac){
        cout << "Yes" << endl;
    }else if (bc == ca){
        cout << "Yes" << endl;
    }else if (ca == ab){
        cout << "Yes" << endl;
    }else if (cb == ba){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}