// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> lstIdx(n + 1, -1), mxDst(n + 1, -1);
    vector<pair<int, int>> b;
    int j = 0, ans = oo;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mxDst[ai] = max(mxDst[ai], i - lstIdx[ai] - 1);
        lstIdx[ai] = i;
    }

    for(int i = 1; i <= n; i++) {
        if(lstIdx[i] != -1) b.push_back({max(mxDst[i], n - lstIdx[i] - 1), i});
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++) {
        while(j < b.size() && b[j].first <= i) ans = min(ans, b[j++].second);
        cout << ((ans == oo) ? -1 : ans) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}