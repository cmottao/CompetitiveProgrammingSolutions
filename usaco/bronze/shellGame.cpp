// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

bool x[3][3];

void solve() {
    int n; cin >> n;
    int ans[] = {0, 0, 0};

    for(int i = 0; i < 3; i++) {
        x[i][i] = 1;
    }

    while(n--) {
        int a, b, g; cin >> a >> b >> g;

        for(int i = 0; i < 3; i++) {
            swap(x[i][a - 1], x[i][b - 1]);
            ans[i] += x[i][g - 1];
        }
    }
    cout << max(ans[0], max(ans[1], ans[2]));
}

int main() {
    freopen("shell.out", "w", stdout);
    freopen("shell.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}