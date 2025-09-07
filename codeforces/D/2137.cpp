// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), freq(n + 1, 0);
    map<int, vector<int>> x;
    int cur = 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        if(freq[i] % i) {
            cout << -1 << '\n';
            return;
        }

        for(int j = 0; j < freq[i] / i; j++) {
            for(int k = 0; k < i; k++) {
                x[i].push_back(cur);
            }
            cur++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << x[a[i]].back() << ' ';
        x[a[i]].pop_back();
    }
    cout << '\n';

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}