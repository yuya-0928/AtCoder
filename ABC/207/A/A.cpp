#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> abc(3);

  for (int i =0; i<3; i++) cin >> abc.at(i);

  sort(abc.begin(), abc.end());

  cout << abc.at(2) + abc.at(1) << endl;   

}