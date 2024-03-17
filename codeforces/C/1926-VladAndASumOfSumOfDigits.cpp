// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;

vector<int> memo(N, -1);

int g(int n) {
    int s = 0;
    
    while(n) {
        s += n % 10;
        n /= 10;
    }
    return s;
} 

int f(int n) {
    if(memo[n] != -1) {
        return memo[n];
    }
    else {
        return memo[n] = f(n - 1) + g(n);
    }
}

void solve() {
    int n; cin >> n;
    memo[0] = 0;
    
    cout << f(n) << '\n';
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