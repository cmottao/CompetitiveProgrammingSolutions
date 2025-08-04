// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0, s = 0;
    priority_queue<int, vector<int>, greater<int>> a;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.push(ai);
    }

    while(!a.empty()) {
        int cur = a.top(); a.pop();

        if(cur >= s) {
            s += cur;
            ans++;
        }
    }
    cout << ans;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}