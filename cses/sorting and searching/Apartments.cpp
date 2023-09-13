// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    int person = 0, ap = 0, ans = 0;
    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < m; i++) {
        cin >> b[i]; 
    }
    sort(b.begin(), b.end());

    while(person < n && ap < m) {
        if(b[ap] >= (a[person] - k) && b[ap] <= (a[person] + k)) {
            ans++; person++; ap++;
        }
        else {
            if(b[ap] < a[person]) {
                ap++;
            }
            else {
                person++;       
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}