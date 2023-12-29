// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> g(3);
    vector<string> a(8, "");
    set<string> one, two;

    for(int i = 0; i < 3; i++) {
        cin >> g[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i * 2] += g[i][j];
            a[(i * 2) + 1] += g[j][i];
        }

        a[6] += g[i][3 - i - 1];
        a[7] += g[i][i];
    }

    for(int i = 0; i < 8; i++) {
        sort(a[i].begin(), a[i].end());

        if(a[i][0] == a[i][2]) {
            one.insert(a[i]);
        }
        else if((a[i][0] != a[i][1]) && (a[i][1] == a[i][2])) {
            two.insert(a[i].substr(0, 2));
        }
        else if((a[i][1] != a[i][2]) && (a[i][0] == a[i][1])) {
            two.insert(a[i].substr(1, 2));
        }
    }
    
    cout << one.size() << '\n';
    cout << two.size() << '\n';
}

int main() {
    freopen("tttt.out", "w", stdout);
    freopen("tttt.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}