// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size(), p = 0, x = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            p++;
        }
        else {
            if(!x) {
                ans = max(ans, p - 1);
                x = 1;
            }
            else {
                ans = max(ans, (p - 1) / 2);
            }
            p = 0;
        }
    }
    ans = max(ans, p - 1);
    cout << ans << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    while(cin >> s) solve(s);
}