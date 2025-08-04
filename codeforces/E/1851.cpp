// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

int c[N], p[N], memo[N];
bool p[N];
vector<int> e[N];

int dp(int i) {
    if(memo[i] != -1) return memo[i];
    if(p[i]) return memo[i] = 0;
    if(!e[i].size()) return memo[i] = c[i];
    long long s = 0;

    for(int x : e[i]) {
        s += dp(x);
    }
    return memo[i] = min((long long) c[i], s); 
}

void solve() {
    int n, k; cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> c[i];
        p[i] = 0;
        memo[i] = -1;
    }
    for(int i = 0; i < k; i++) {
        int pi; cin >> pi;
        p[pi - 1] = 1;
    }
    for(int i = 0; i < n; i++) {
        int mi; cin >> mi;
        e[i].resize(mi);

        for(int j = 0; j < mi; j++) {
            cin >> e[i][j];
            e[i][j]--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << dp(i) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}