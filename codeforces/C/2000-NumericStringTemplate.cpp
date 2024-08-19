// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m; cin >> m;
    for(int i = 0; i < m; i++) {
        string si; cin >> si;

        if(si.size() != n) {
            cout << "NO" << '\n';
            continue;
        }
        map<char, int> mp1;
        map<int, char> mp2;
        int ans = 1;

        for(int j = 0; j < si.size(); j++) {
            if((mp1.find(si[j]) != mp1.end()) || (mp2.find(a[j]) != mp2.end())) {
                if((mp1[si[j]] != a[j]) || (mp2[a[j]] != si[j])) {
                    ans = 0;
                    break;
                }
            }
            mp1[si[j]] = a[j];
            mp2[a[j]] = si[j];
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}