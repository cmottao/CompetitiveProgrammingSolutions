// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    string a; cin >> a;
    int lstLogIdx = -1, lstCoIdx = -1;  
    a += 'L';

    for(int i = 0; i <= n; i++) {
        if(a[i] == 'L') {
            if(i && a[i - 1] != 'L') {
                if(lstLogIdx + m <= lstCoIdx) k = -1;
                else if(lstLogIdx + m < i) k -= (i - lstLogIdx - m);
            }
            lstLogIdx = i;

            if(k < 0) {
                cout << "NO" << '\n';
                return;
            }
        }
        else if(a[i] == 'C') lstCoIdx = i;
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}