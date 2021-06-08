#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

// 値を確認のために出力する
void trace(int A[], int N){
    for (int i = 0; i < N; i++){
        if (i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

// 挿入ソートを実行する関数
void insertionSort(int A[],  int N){
    int v, j;

    for (int i = 1; i < N; i++){
        v = A[i]; // 4
        j = i - 1; // 3
        while (j>=0 && A[j]>v){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
        trace(A, N);
        
    }
}

int main(){
    int N, A[100];

    cin >> N;
    for (int i =0; i<N; i++) cin >> A[i];

    trace(A, N);
    insertionSort(A, N);

    return 0;
}