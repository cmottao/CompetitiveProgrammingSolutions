// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    vector<long long> ans;

    for(long long i = 1e18; i > 1; i /= 10) {
        if(n % (1 + i) == 0) ans.push_back(n / (1 + i));
    }

    if(ans.empty()) cout << 0 << '\n';
    else {
        cout << ans.size() << '\n';
        for(long long x : ans) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}