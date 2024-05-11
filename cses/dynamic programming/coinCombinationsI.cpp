// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6 + 10;

vector<long long> memo(N, -1), c(110);
int n;

long long f(int x) { 
    if(x == 0) {
        return 1;
    }
    else if(memo[x] != -1) {
        return memo[x];
    }
    else {
        memo[x] = 0;

        for(int i = 0; i < n; i++) { 
            if(x >= c[i]) {
                memo[x] += f(x - c[i]) % mod;
            } 
        }
        return memo[x] % mod;
    }
}

void solve() {
    int x; cin >> n >> x;

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    cout << f(x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}