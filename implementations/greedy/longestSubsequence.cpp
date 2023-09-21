// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 1, s = 1;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) {
            s++;
        }
        else {
            s = 1;
        }
        ans = max(ans, s);
    }
    cout << ans << '\n';
}