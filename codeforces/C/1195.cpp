// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10;

long long g[2][M], memo[2][M];
int m;

long long dp(int i, int j) {
    if(memo[i][j] != -1) {
        return memo[i][j];
    }
    else if(j >= m - 1) {
        return memo[i][j] = g[i][m - 1];
    }
    else {
        return memo[i][j] = g[i][j] + max(dp(i ^ 1, j + 1), dp(i ^ 1, j + 2));
    }
}

void solve() {
    cin >> m;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < m; j++) {
            memo[i][j] = -1;
            cin >> g[i][j];
        }
    }
    cout << max(dp(0, 0), dp(1, 0));
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}