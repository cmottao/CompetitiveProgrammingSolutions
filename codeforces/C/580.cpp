// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int n, m;
vector<int> t[N];
int a[N], memo[N];

int f(int i, int p) {
    if(a[i]) a[i] += a[p];
    if(i != 1 && t[i].size() == 1) return memo[i] = 1;

    for(int u : t[i]) {
        if(u != p && a[u] + a[i] <= m) memo[i] += f(u, i);
    }
    return memo[i];
}

void solve() {
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++) {
        int xi, yi; cin >> xi >> yi;
        t[xi].push_back(yi); t[yi].push_back(xi);
    }
    cout << f(1, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}