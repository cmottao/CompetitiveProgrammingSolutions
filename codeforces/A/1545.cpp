// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), a1(n);
    map<int, int> e, o;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a1[i] = a[i];
        (i & 1) ? o[a[i]]++ : e[a[i]]++;
    }
    sort(a1.begin(), a1.end());

    for(int i = 0; i < n; i++) {
        (i & 1) ? o[a1[i]]-- : e[a1[i]]--;
    }

    for(int i = 1; i <= n; i++) {
        if(e[a[i]] != 0 || o[a[i]] != 0) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}