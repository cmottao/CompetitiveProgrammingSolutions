// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m; cin >> n >> s >> m;
    vector<int> a = {0};

    for(int i = 0; i < n; i++) {
        int li, ri; cin >> li >> ri;
        a.push_back(li);
        a.push_back(ri);
    }
    n = a.size();

    for(int i = 1; i < n; i += 2) {
        if(a[i] - a[i - 1] >= s) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << ((m - a[n - 1] >= s) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}