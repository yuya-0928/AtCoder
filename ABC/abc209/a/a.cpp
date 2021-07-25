#include <bits/stdc++.h>
using namespace std;

int main(){
    int  A, B;
    int count = 0;
    cin >> A >> B;
    for(int i=0; i< B-A+1; i++){
        count++;
    }
    cout << count << endl;
}