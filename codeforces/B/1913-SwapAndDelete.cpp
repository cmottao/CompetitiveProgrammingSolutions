// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int a[] = {0, 0};
    
    for(int i = 0; i < s.size(); i++) {
        a[0] += (s[i] == '0');
        a[1] += (s[i] == '1');
    }
    
    for(int i = 0; i < s.size(); i++) {
        if(!(a[(s[i] - '0') ^ 1]--)) {
            cout << s.size() - i << '\n';
            return;
        }
    }
    cout << 0 << '\n';
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