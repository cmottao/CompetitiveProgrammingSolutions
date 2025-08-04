// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    set<long long> st = {n};

    for(long long bit = 1; bit <= n; bit <<= 1) {
        if(n & ~(bit)) st.insert(n & ~(bit));
    }

    cout << st.size() << '\n';
    for(long long x : st) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}