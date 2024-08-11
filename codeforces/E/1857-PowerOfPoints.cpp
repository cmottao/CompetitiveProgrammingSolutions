// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<long long, long long>> a(n), ans(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if(!i) {
            ans[i].second = 0;

            for(int j = 0; j < n; j++) {
                ans[i].second += a[j].first - a[i].first + 1;
            }
        }
        else ans[i].second = ans[i - 1].second + ((a[i].first - a[i - 1].first) * ((2 * i) - n)); 

        ans[i].first = a[i].second;
    }
    sort(ans.begin(), ans.end());

    for(int i = 0; i < n; i++) {
        cout << ans[i].second << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}