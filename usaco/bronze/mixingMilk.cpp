// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[3][2];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 100; i++) {
        int c = min(a[i % 3][1], a[(i + 1) % 3][0] - a[(i + 1) % 3][1]);
        a[(i + 1) % 3][1] += c;
        a[i % 3][1] -= c;
    }

    for(int i = 0; i < 3; i++) {
        cout << a[i][1] << '\n';
    }
}

int main() {
    freopen("mixmilk.out", "w", stdout);
    freopen("mixmilk.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}