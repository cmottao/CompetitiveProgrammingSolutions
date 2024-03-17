// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> a(N), memo(N);
int n;

int f(int x) {
    if(memo[x] != -1) {
        return memo[x];
    }
    else {
        memo[x] = 1;

        for(int i = 2*x; i <= n; i += x) {
            if(a[i] > a[x]) {
                memo[x] = max(memo[x], f(i) + 1);
            }
        }
        return memo[x];
    }
}

void solve() {
    cin >> n;
    int ans = 1;

    for(int i = 1; i <= n; i++) {
        memo[i] = -1;
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        ans = max(ans, f(i));
    }
    cout << ans << '\n';
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