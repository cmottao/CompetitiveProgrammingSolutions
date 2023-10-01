// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n log(n))
void solve() {
    int n, a, b; cin >> n >> a >> b;
    vector<int> c(n);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c.begin(), c.end());

    int l = lower_bound(c.begin(), c.end(), a) - c.begin();
    int r = upper_bound(c.begin(), c.end(), b) - c.begin();

    for(int i = l; i < r; i++) {
        cout << c[i] << ' ';
    }
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