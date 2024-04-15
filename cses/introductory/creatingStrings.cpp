// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

bool chs[8];
set<string> ans;
string s, p = "";

void search() {
    if(p.size() == s.size()) {
        ans.insert(p);
    }
    else {
        for(int i = 0; i < s.size(); i++) {
            if(!chs[i]) {
                chs[i] = 1;
                p.push_back(s[i]);
                search();

                chs[i] = 0;
                p.pop_back();
            }
        }
    }
}

void solve() {
    cin >> s;
    search();

    cout << ans.size() << '\n';
    for(string x : ans) {
        cout << x << '\n';
    }
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