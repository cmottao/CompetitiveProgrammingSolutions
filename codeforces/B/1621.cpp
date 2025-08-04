// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> l(n), r(n), c(n);
    map<int, int> mpl, mpr;
    map<pair<int, int>, int> mp;
    int mnl = oo, mxr = 0;

    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> c[i];
    }

    for(int i = 0; i < n; i++) {
        if(mpl.find(l[i]) == mpl.end() || c[i] < c[mpl[l[i]]]) mpl[l[i]] = i;    
        if(mpr.find(r[i]) == mpr.end() || c[i] < c[mpr[r[i]]]) mpr[r[i]] = i;

        if(mp.find({l[i], r[i]}) == mp.end()) mp[{l[i], r[i]}] = c[i];
        else mp[{l[i], r[i]}] = min(mp[{l[i], r[i]}], c[i]);

        mnl = min(mnl, l[i]);
        mxr = max(mxr, r[i]);

        if(mp.find({mnl, mxr}) != mp.end()) cout << min(mp[{mnl, mxr}], c[mpr[mxr]] + c[mpl[mnl]]) << '\n';
        else cout << c[mpr[mxr]] + c[mpl[mnl]] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}