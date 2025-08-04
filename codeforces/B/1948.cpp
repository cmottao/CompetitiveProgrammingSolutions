// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    vector<int> d;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = n-1; i > 0; i--) {
        if(stoi(a[i]) < stoi(a[i - 1])) {
            for(int j = 0; j < i; j++) {
                for(int k = 0; k < a[j].size(); k++) {
                    d.push_back(a[j][k] - '0');
                }
            }
            d.push_back(stoi(a[i]));
            break;
        }
    }

    for(int i = 1; i < d.size(); i++) {
        if(d[i] < d[i - 1]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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