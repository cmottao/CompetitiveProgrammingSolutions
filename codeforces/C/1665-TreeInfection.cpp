// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> t(n + 1, 0);
    multiset<int> st;
    int s = 0;
    t[0] = 1;
    
    for(int i = 1; i < n; i++) {
        int pi; cin >> pi;
        t[pi]++;
    }
    sort(t.rbegin(), t.rend());

    while(!t.back()) {
        t.pop_back();
    }

    for(int i = 0; i < t.size(); i++) {
        if(t[t.size() - 1 - i] - i - 1 > 0) st.insert(t[t.size() - 1 - i] - i - 1);
    }

    while(st.size()) {
        multiset<int> st1;
        int mx = 0;

        for(int x : st) {
            if(x > 1) {
                st1.insert(x - 1); 
                mx = max(mx, x - 1);
            }
        }
        
        if(mx) {
            st1.erase(st1.find(mx));
            if(mx > 1) st1.insert(mx - 1);
        }
        st = st1;
        s++;
    }
    cout << t.size() + s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}