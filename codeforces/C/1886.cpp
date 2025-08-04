// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    long long pos; cin >> pos;
    long long x = s.size() - 1, i = 0, c = 0;

    while(true) {
        if(pos - 1 <= x) {
            string b = "";
            long long m = i;

            for(int j = 0; j < s.size(); j++) {
                while(b.size() && b.back() > s[j] && m) {
                    b.pop_back();
                    m--;
                }
                b.push_back(s[j]);
            }
            cout << b[((pos + c - 1) % s.size()) - i];
            return;
        }
        x += (s.size() - ++i);
        c += i;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}