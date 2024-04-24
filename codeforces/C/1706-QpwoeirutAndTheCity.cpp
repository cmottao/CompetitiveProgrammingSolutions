// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> a(N);
long long memo[N][2];
int n;

int b(int i) {
    if(i > 1 && i < n && (a[i - 1] >= a[i] || a[i + 1] >= a[i])) {
        return max(a[i - 1], a[i + 1]) - a[i] + 1;
    } 
    else {
        return 0;
    }
}

long long f(int i, int x) {
    if(i >= n) {
        return 0;
    }
    else if(memo[i][x] != -1) {
        return memo[i][x];
    }
    else {
        memo[i][x] = b(i) + f(i + 2, x);

        if(x) {
            memo[i][x] = min(memo[i][x], b(i) + f(i + 3, 0));
        } 
        return memo[i][x];
    }
}

void solve() {
    cin >> n;
    memo[0][0] = memo[0][1] = -1;
    
    for(int i = 1; i <= n; i++) {
        memo[i][0] = memo[i][1] = -1;
        cin >> a[i];
    }
    cout << f(0, !(n % 2)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}