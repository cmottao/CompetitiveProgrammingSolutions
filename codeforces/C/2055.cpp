// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<vector<long long>> a(n, vector<long long>(m));
    vector<long long> r(n, 0), c(m, 0);
    int curI = 0, curJ = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            r[i] += a[i][j];
            c[j] += a[i][j];
        }
    }

    for(char ch : s) {
        if(ch == 'D') {
            a[curI][curJ] = -r[curI];
            c[curJ] += a[curI][curJ];
            curI++;
        }
        else {
            a[curI][curJ] = -c[curJ];
            r[curI] += a[curI][curJ];
            curJ++;
        }
    }
    a[n - 1][m - 1] = -c[m - 1];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}