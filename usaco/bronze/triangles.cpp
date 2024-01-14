// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(x[i] == x[j] && y[i] == y[k]) {
                    ans = max(ans, abs(y[i] - y[j]) * abs(x[i] - x[k]));
                }   
            }
        }
    }
    cout << ans;
}

int main() {
    freopen("triangles.out", "w", stdout);
    freopen("triangles.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}