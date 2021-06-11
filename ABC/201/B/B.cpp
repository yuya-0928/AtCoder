#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    // int N;
    // cin >> N;
    // map<int, string> st;
    // vector<string> T(N);
    // vector<int> S(N);
    // for (int i=N; i<N; i++) {
    //     cin >> S[i] >> T[i];
    //     st[S[i]] = T[i];
    // }

    // // sort(st.begin(), st.end());

    // // sort(S.begin(), S.end());
    // // sort(T.begin(), T.end());

    // // reverse(S.begin(), S.end());
    // // reverse(T.begin(), T.end());

    int N; cin >> N;
    vector<pair<int,string>> data(N);
    for(int i=0; i<N; i++) cin >> data[i].second >> data[i].first;
    sort(data.begin(),data.end(),std::greater{});
    cout << data[1].second << endl;
}