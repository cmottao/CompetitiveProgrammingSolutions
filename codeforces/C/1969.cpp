// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 10;
const long long oo = 1e18;

vector<int> a(N);
long long memo[N][11];
int n;

long long f(int i, int k) {
    if(i >= n) {
        return 0;
    }
    else if(memo[i][k] != -1) {
        return memo[i][k];
    } 
    else {
        memo[i][k] = oo;
        long long mn = oo;

        for(int j = 0; j <= k; j++) {
            if(i + j < n) {
                mn = min(mn, (long long) a[i + j]);
                memo[i][k] = min(memo[i][k], (mn * (j + 1)) + f(i + j + 1, k - j));
            }
        }
        return memo[i][k];
    }
}

void solve() {
    int k; cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        for(int j = 0; j < 11; j++) {
            memo[i][j] = -1;
        }
    }
    cout << f(0, k) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}