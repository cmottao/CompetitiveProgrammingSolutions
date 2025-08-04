// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;
const int oo = 1e9;

vector<int> a(N), memo(N);

int dp(int i, int n) {
    if(i > n) {
        return oo;
    }
    else if(memo[i] != oo) {
        return memo[i];
    }
    else {
        return memo[i] = min(dp(i + 1, n) + 1, dp(i + a[i] + 1, n));
    }
}

void solve() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        memo[i] = oo;
        cin >> a[i];
    }
    memo[n] = 0;

    cout << dp(0, n) << '\n';
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