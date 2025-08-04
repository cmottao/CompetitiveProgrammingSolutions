// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<queue<int>> a(n + 1);
    vector<int> mp(q + 1);
    set<int> st;
    int c = 1, mn = 1;

    for(int i = 0; i < q; i++) {
        int t, x; cin >> t >> x;

        if(t == 1) {
            a[x].push(c);
            mp[c] = x;
            st.insert(c++);
        }
        else if(t == 2) {
            while(!a[x].empty()) {
                st.erase(a[x].front());
                a[x].pop();
            }
        }
        else {
            for(int j = mn; j <= x; j++) {
                if(st.find(j) != st.end()) {
                    st.erase(j);
                    a[mp[j]].pop();
                }
            }
            mn = max(mn, x + 1);
        }
        cout << st.size() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}