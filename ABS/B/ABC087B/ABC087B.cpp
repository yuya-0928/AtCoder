#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, ans;
    int sum;
    int Z = 500;
    int Y = 100;
    int X = 50;
    int counter = 0;

    cin >> a >> b >> c >> ans;

    for (int x = 0; x <= c; x++){
        for(int y = 0; y <= b; y++ ){
            for(int z=0; z<=a; z++){
                sum = X*x + Y*y + Z*z;
                if(ans == sum){
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
}