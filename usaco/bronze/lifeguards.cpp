// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a(N, 0), idx(N, -1);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        idx[x] = idx[y] = i;
        a[x] = 1; a[y] = -1;
    }

    for(int i = 0; i < n; i++) {
        int s = 0, c = 0;

        for(int j = 0; j < N; j++) {
            if(idx[j] != i) {
                s += a[j];
            }
            if(s) {
                c++;
            }
        }
        ans = max(ans, c);
    }
    cout << ans;
}

int main() {
    freopen("lifeguards.out", "w", stdout);
    freopen("lifeguards.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}