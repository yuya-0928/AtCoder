#include <bits/stdc++.h>
#include <string>
using namespace std;


string N;
#define YES "Yes"
#define NO "No"
#define all(x) (x).begin(),(x).end()
int main() {
    cin >> N;
    
    while (*N.rbegin() == '0') N = N.substr(0, N.length() - 1);

    string NN = N;
    reverse(NN.begin(), NN.end());

    if (N == NN) cout << YES << endl;
    else cout << NO << endl;
}