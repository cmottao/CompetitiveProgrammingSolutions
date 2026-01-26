// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(a[0] == -1 && a[n - 1] != -1) a[0] = a[n - 1];
    else if(a[0] != -1 && a[n - 1] == -1) a[n - 1] = a[0];

    cout << abs(a[0] - a[n - 1]) << '\n';
    
    for(int i = 0; i < n; i++) {
        cout << ((a[i] == -1) ? 0 : a[i]) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}