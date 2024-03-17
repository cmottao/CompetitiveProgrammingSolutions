// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mn = oo, j = n - 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    while(j && a[j] >= a[j - 1]) {
        j--;
    }

    for(int i = 0; i < j; i++) {
        if(a[i] == mn) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << j << '\n';
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