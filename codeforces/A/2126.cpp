// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x; cin >> x;
    int y = 10;
    
    for(char ch : x) {
        y = min(y, ch - '0');
    }
    cout << y << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}