// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = a[0], bst = a[0];
    
    for(int i = 1; i < n; i++) {
        bst = max(bst + a[i], a[i]);
        ans = max(ans, bst);
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