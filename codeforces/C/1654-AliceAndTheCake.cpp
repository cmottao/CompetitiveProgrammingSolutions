// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    priority_queue<int> a;
    priority_queue<long long> q;
    long long s = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.push(ai);
        s += ai;
    }
    q.push(s);
    
    while(!q.empty()) {
        long long cur = q.top(); q.pop();

        if(cur == a.top()) {
            a.pop();
        }
        else if(n > 1 && cur > 1) {
            q.push((cur + 1) / 2);
            q.push(cur / 2);
            n--;
        }
    }
    cout << ((a.empty()) ? "YES" : "NO") << '\n';
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