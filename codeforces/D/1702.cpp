// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int p; cin >> p;
    vector<int> mp(26, 0);
    int cur = 0;

    for(char ch : s) {
        cur += ((ch - 'a') + 1);
        mp[ch - 'a']++;
    }

    for(int i = 25; i >= 0; i--) {
        if(mp[i] && cur > p) {
            int x = min(mp[i], (cur - p + i) / (i + 1));
            cur -= (x * (i + 1));
            mp[i] -= x;
        }
    }

    for(char ch : s) {
        if(mp[ch - 'a']) {
            mp[ch - 'a']--;
            cout << ch;
        }
    }    
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}