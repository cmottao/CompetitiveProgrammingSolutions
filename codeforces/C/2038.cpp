// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), ans;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(a.size() > 1) {
        if(a[a.size() - 1] == a[a.size() - 2]) {
            ans.push_back(a.back());
            a.pop_back(); 
        }
        a.pop_back();
    }
    n = ans.size();

    if(n < 4) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';
        cout << ans[n - 1] << ' ' << ans[n - 2] << ' ' << ans[n - 1] << ' ' << ans[0] << ' ' << ans[1] << ' ' << ans[n - 2] << ' ' << ans[1] << ' ' << ans[0] << '\n'; 
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}