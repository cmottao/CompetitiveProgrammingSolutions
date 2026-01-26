// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string x; cin >> x;
    vector<pair<int, string>> ans(10, {0, x});

    for(int c = 0; c < 10; c++) {
        int e = 0;

        for(int i = 0; i < n; i++) {
            if(ans[c].second[i] - '0' == c) e++;
        }
        
        for(int i = 1; i < 10; i++) {
            if(c + i < 10) {
                for(int j = 0; j < n; j++) {
                    if(e < k && ans[c].second[j] - '0' == c + i) {
                        ans[c].second[j] = '0' + c;
                        ans[c].first += i;
                        e++;
                    }
                }
            }
            if(c - i >= 0) {
                for(int j = n; j >= 0; j--) {
                    if(e < k && ans[c].second[j] - '0' == c - i) {
                        ans[c].second[j] = '0' + c;
                        ans[c].first += i;
                        e++;
                    }
                }
            }
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans[0].first << '\n';
    cout << ans[0].second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}