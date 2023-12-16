// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<int> p(n);
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    
    for(int i = 0; i < n; i++) {
        ans += abs(p[i / 2] - p[i]);
    }
    cout << ans;
}
 
int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}