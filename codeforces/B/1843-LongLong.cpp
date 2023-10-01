// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a;
    long long ans = 0, s = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        if(ai != 0) {
            a.push_back(ai);
        }
        s += abs(ai);
    }
    a.push_back(1);
    n = a.size();
    
    for(int i = 1; i < n; i++) {
        ans += (a[i - 1] < 0 && a[i] > 0);
    }
    cout << s << ' ' << ans << '\n';
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