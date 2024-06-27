// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

char veh[] = {'R', 'H'};
map<char, pair<int, int>> moves = {{'N', {1, 0}}, {'S', {-1, 0}}, {'W', {0, -1}}, {'E', {0, 1}}};

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    map<char, int> cur = {{'N', 0}, {'S', 0}, {'W', 1}, {'E', 1}};
    pair<int, int> pos[] = {{0, 0}, {0, 0}};
    int moved[] = {0, 0}; 

    for(char d : s) {
        pos[cur[d]].first += moves[d].first;
        pos[cur[d]].second += moves[d].second;
        moved[cur[d]] = 1;
        ans += veh[cur[d]];
        cur[d] ^= 1;
    }
    cout << ((pos[0] != pos[1] || !moved[0] || !moved[1]) ? "NO" : ans) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}