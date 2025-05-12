// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n; cin >> n;
    int c = 0;

    for(char ch : n) {
        if(ch == '0') c++;
    }

    for(int i = n.size() - 1; i >= 0; i--) {
        if(n[i] != '0') {
            cout << n.size() - c - 1 << '\n';
            return;
        }
        c--;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}