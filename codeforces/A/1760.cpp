// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(3);
    
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << a[1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}