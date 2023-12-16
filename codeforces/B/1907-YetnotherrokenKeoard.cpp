// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    deque<pair<int, char>> lwr, upr;

    for(int i = 0; i < s.size(); i++) {
        if(islower(s[i])) {
            if(s[i] == 'b' && !lwr.empty()) {
                lwr.pop_back();
            }
            else if(s[i] != 'b') {
                lwr.push_back({i, s[i]});
            }
        }
        else {
            if(s[i] == 'B' && !upr.empty()) {
                upr.pop_back();
            }
            else if(s[i] != 'B') {
                upr.push_back({i, s[i]});
            }
        }
    }

    for(int i = 0; i < s.size(); i++) {
        if(!lwr.empty() && lwr.front().first == i) {
            cout << lwr.front().second;
            lwr.pop_front();
        }
        else if(!upr.empty() && upr.front().first == i) {
            cout << upr.front().second;
            upr.pop_front();
        }
    }
    cout << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}