// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

map<char, pair<int, int>> moves = {{'D', {0, 1}}, {'R', {1, 0}}, {'U', {0, -1}}, {'L', {-1, 0}}};

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s; 
    int r = 0, mnR = 0, mxR = 0, c = 0, mnC = 0, mxC = 0;

    for(char ch : s) {
        if(max(mxR, r + moves[ch].second) - min(mnR, r + moves[ch].second) >= n || max(mxC, c + moves[ch].first) - min(mnC, c + moves[ch].first) >= m) {
            cout << 1 - mnR << ' ' << 1 - mnC << '\n';
            return;
        }

        r += moves[ch].second;
        mnR = min(mnR, r);
        mxR = max(mxR, r);
        c += moves[ch].first;
        mnC = min(mnC, c);
        mxC = max(mxC, c);
    }
    cout << 1 - mnR << ' ' << 1 - mnC << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}