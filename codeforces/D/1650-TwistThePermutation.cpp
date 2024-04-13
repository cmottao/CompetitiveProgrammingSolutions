// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(n, 0);
    deque<int> a;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.push_back(ai);
    }

    for(int i = n-1; i >= 0; i--) {
        while(a.back() != i + 1) {
            a.push_back(a.front());
            a.pop_front();
            ans[i]++;
        }
        a.pop_back();
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}