// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

void solve() {
    int n, m, k, d; cin >> n >> m >> k >> d;
    vector<long long> cost(n), a(m), memo(m);
    long long ans = oo, s = 0, l = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[j];
        }
        multiset<long long> lst = {1};
        memo[0] = 1; 
        
        for(int j = 1; j < m; j++) {
            memo[j] = *lst.begin() + a[j] + 1;
            lst.insert(memo[j]);
            if(j > d) lst.erase(lst.find(memo[j - d - 1]));
        }
        cost[i] = memo[m - 1];
    }

    for(int i = 0; i < n; i++) {
        s += cost[i];

        if(i >= k - 1) {
            ans = min(ans, s);
            s -= cost[i - k + 1];
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}