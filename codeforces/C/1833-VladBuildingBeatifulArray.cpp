// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int minOdd = oo, odds = 0, evens = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2) {
            minOdd = min(minOdd, a[i]);
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i] % 2) {
            evens++;
            odds += (a[i] - minOdd > 0);
        }
        else {
            odds++;
            evens += (a[i] - minOdd > 0);
        }
    }
    cout << ((evens == n || odds == n) ? "YES" : "NO") << '\n';
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