// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), mp(n + 1, 0), mp1(n + 1, 0), pf[n];
    long long pc = 0, ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp1[a[i]]++;
        int ai = a[i];
        
        for(int j = 2; j * j <= ai; j++) {
            while(ai % j == 0) {
                pf[i].push_back(j);
                ai /= j;
            }
            if(pf[i].size() == 3) break;
        }
        if(ai != 1) pf[i].push_back(ai);
    }
    
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;

        if(pf[i].size() == 1) {
            ans += (pc - mp[a[i]] + 1);
            pc++;
        }
        else if(pf[i].size() == 2) {
            ans += mp[a[i]];
            ans += ((pf[i][0] == pf[i][1]) ? mp1[pf[i][0]] : mp1[pf[i][0]] + mp1[pf[i][1]]);
        }
       
    }
    cout << ans << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) solve();
}