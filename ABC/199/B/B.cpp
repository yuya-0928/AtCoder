#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    int N;
    cin >> N;

    int A[N];
    int B[N];

    for (int i=0; i<N; i++) cin >> A[i];
    for (int i=0; i<N; i++) cin >> B[i];
    
    int min = 0;
    int max = 0;
    int sum = 0;
    for (int i=0; i<N; i++){
        if (i==0){
            min = A[i];
            max = B[i];
        }   

        if (min < A[i]){
            min = A[i];
        }

        if (max > B[i]){
            max = B[i];
        }
    }

    while (min <= max){
        sum++;
        min++;
    }
    cout << sum << endl;
}