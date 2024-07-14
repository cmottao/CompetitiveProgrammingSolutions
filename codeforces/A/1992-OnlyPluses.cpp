// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    priority_queue<int, vector<int>, greater<int>> q;
    int ans = 1;

    for(int i = 0; i < 3; i++) {
        int x; cin >> x;
        q.push(x);
    }    

    for(int i = 0; i < 5; i++) {
        q.push(q.top() + 1);
        q.pop();
    }

    while(!q.empty()) {
        ans *= q.top();
        q.pop();
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}