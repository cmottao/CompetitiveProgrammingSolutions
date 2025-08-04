// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    multiset<int> s;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1] + 1) {
            auto it = s.find(a[i] - 1);
            
            if(it != s.end()) {
                s.erase(it);
            }
            s.insert(a[i - 1]);
        }
    }
    cout << s.size() + 1 << '\n';
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