// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int c = 0, bst = 0, sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c += a[i];
    }

    for(int i = 0; i < n; i++) {
        a[i] = ((a[i] == 1) ? -1 : 1);
        sum = max(sum + a[i], a[i]);
        bst = max(bst, sum);
    }
    c -= (c == n);
    cout << c + bst;
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