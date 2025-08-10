// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    long long ans = 0;
    indexed_set l;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].second >> a[i].first;
        l.insert(a[i].second);
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        ans += l.size() - l.order_of_key(a[i].second) - 1;
        l.erase(a[i].second);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}