// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

int x[] = {1, 3, 6, 10, 15};
vector<int> memo(70, -1);

int f(int n) {
    if(memo[n] != -1) {
        return memo[n];
    }
    else if(n == 0) {
        return 0;
    }
    else {
        memo[n] = oo;

        for(int c : x) {
            if(n - c >= 0) {
                memo[n] = min(memo[n], f(n - c) + 1);
            }
        }
        return memo[n];
    }
}

void solve() {
    int n; cin >> n;

    if(n <= 30) {
        cout << f(n) << '\n';
    }
    else {
        cout << (((n / 30) - 1) * 2) + f((n % 30) + 30) << '\n';
    }
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