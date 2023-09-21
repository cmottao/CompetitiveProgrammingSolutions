// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a = {oo};
    int pre = -1;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(ai != pre) {
            a.push_back(ai);
            pre = ai;
        }
    }
    a.push_back(oo);
    n = a.size();

    for(int i = 1; i < n-1; i++) {
        if((a[i] > a[i - 1]) && (a[i] > a[i + 1])) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}