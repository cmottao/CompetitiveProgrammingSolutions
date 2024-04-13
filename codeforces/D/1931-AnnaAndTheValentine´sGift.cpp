// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> z;
    int l = 0;
    
    for(int i = 0; i < n; i++) {
        string ai; cin >> ai;
        int j = ai.size() - 1;
        l += ai.size() + 1;

        while(j >= 0 && ai[j] == '0') {
            j--;
        }
        z.push_back(ai.size() - j - 1);
    }
    sort(z.rbegin(), z.rend());

    for(int i = 0; i < z.size(); i += 2) {
        l -= z[i];
    }
    cout << ((l > m) ? "Sasha" : "Anna") << '\n';
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