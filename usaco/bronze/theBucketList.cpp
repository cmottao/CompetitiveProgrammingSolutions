// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a(N, 0);
    int ans = 0, s = 0;

    for(int i = 0; i < n; i++) {
        int si, ti, bi; cin >> si >> ti >> bi;
        a[si] = bi; a[ti] = -bi; 
    }

    for(int i = 0; i < N; i++) {
        s += a[i];
        ans = max(ans, s);
    }
    cout << ans;
}

int main() {
    freopen("blist.out", "w", stdout);
    freopen("blist.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}