// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int l = 0, r = 0, mx = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        int g = 0, s = 0;

        for(int j = i; j < n; j++) {
            if(a[j] < a[i]) s++;
            else if(a[j] > a[i]) g++;

            if(s - g >= mx) {
                l = i;
                r = j;
                mx = s - g;
            }
        }
    }
    cout << l + 1 << ' ' << r + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}