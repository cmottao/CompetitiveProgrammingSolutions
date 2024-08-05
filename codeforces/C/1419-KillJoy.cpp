// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int s = 0, ift = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        
        if(a[i] == x) {
            ift++;
            continue;
        }
        s += (a[i] - x);
    }
    cout << ((ift == n) ? 0 : ((!s || ift)? 1 : 2)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}