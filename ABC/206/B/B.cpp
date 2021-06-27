#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int sum = 0;
    int count = 0;
    cin >> N;

    while (N>sum){
        count++;
        sum += count;
    }

    cout << count << endl;

}