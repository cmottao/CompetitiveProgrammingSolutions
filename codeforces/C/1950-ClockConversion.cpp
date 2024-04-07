// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string hs = s.substr(0, 2), ms = s.substr(3, 2);
    int h = stoi(hs), m = stoi(ms);

    if(h < 12) {
        if(h == 0) {
            hs = "12";
        }
        cout << hs << ':' << ms << ' ' << "AM" << '\n';
    }
    else {
        if(h > 12) {
            h -= 12;
        }
        if(h < 10) {
            cout << 0;
        }
        cout << h << ':' << ms << ' ' << "PM" << '\n';
    }
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