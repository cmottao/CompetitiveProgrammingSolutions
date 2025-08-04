// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long o = 0, e = 0;
    set<long long> s;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for(int i = 0; i < n; i++) {
        if(i % 2) {
            o += a[i];
        }
        else {
            e += a[i];
        }
        long long dif = o - e;
 
        if(s.find(dif) != s.end() || !dif) {
            cout << "YES" << '\n';
            return;
        }
        s.insert(dif);
    }
    cout << "NO" << '\n';
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