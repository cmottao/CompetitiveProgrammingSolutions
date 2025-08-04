// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k; cin >> k;
    string s = "";
    
    while(k) {
        int r = k % 9;
        if(r >= 4) r++;
        s += to_string(r);
        k /= 9;
    }
    reverse(s.begin(), s.end());
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}