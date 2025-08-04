// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 10;

vector<int> y = {111111111, 11111111, 1111111, 111111, 11111, 1111, 111, 11};
vector<int> memo(N, -1);

int f(int x) {
    memo[0] = 1;
    if(memo[x] != -1) {
        return memo[x];
    }
    else if(x < 0) {
        return 
    }
}


void solve() {
    int x; cin >> x;
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