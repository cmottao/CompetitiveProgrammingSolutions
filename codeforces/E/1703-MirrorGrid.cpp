// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 100;

char a[N][N], b[N][N];
int c[N][N];

void solve() {
    int n; cin >> n;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            c[i][j] = a[i][j] - '0';
        }
    }

    for(int k = 0; k < 3; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                b[i][j] = a[j][n - i - 1];
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                c[i][j] += b[i][j] - '0';
                a[i][j] = b[i][j];
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans += ((c[i][j] > 2) ? 4 - c[i][j] : c[i][j]);
        }
    }
    cout << ans / 4 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}