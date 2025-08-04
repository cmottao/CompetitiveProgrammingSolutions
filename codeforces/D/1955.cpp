// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    map<int, int> b, v;
    int mtc = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        int bi; cin >> bi;
        b[bi]++;
    }

    for(int i = 0; i < n; i++) {
        if(i >= m) {
            ans += (mtc >= k);

            if(b[a[i - m]] > 0) {
                v[a[i - m]]--;
                mtc -= (v[a[i - m]] < b[a[i - m]]);
            }
        }
        if(b[a[i]] > 0) {
            v[a[i]]++;
            mtc += (v[a[i]] <= b[a[i]]);
        }
    }
    cout << ans + (mtc >= k) << '\n';
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