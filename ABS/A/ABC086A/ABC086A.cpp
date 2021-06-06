#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    int sum = 0;

    cin >> a >> b;

    sum = a * b;

    if (sum%2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    return 0;
}