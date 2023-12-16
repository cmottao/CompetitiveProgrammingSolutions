// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
 
int memo[N][N];
char g[N][N];
 
int dp(int x, int y) {
    if(memo[x][y] != -1) {
        return memo[x][y];
    }
    else if(g[x][y] == '*' || x == -1 || y == -1) {
        return memo[x][y] = 0;
    }
    else {
        return memo[x][y] = (dp(x - 1, y) + dp(x, y - 1)) % mod;
    }
}
 
void solve() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            memo[i][j] = -1;
            cin >> g[i][j];
        }
    }
    
    memo[0][0] = (g[0][0] == '.') ? 1 : 0;
    cout << dp(n - 1, n - 1);
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