// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    multiset<int> st;
    long long s = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    
    for(int i = n - 1; i >= 0; i--) {
        cout << s + max(a[i], *prev(st.end())) << ' ';

        st.erase(st.find(a[i]));
        s += a[i];
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}