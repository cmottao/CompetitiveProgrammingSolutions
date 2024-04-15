// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int n = 8;

bool dg1[(2 * n) - 1], dg2[(2 * n) - 1], clm[n];
char cb[n][n]; 
int ans = 0;

void search(int j) {
    if(j == n) {
        ans++;
    }
    else {
        for(int i = 0; i < n; i++) {
            if(!clm[i] && !dg1[i + j] && !dg2[n - i + j - 1] && cb[i][j] == '.') {
                clm[i] = dg1[i + j] = dg2[n - i + j - 1] = 1;
                search(j + 1);
                clm[i] = dg1[i + j] = dg2[n - i + j - 1] = 0;
            }
        }
    }
}

void solve() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> cb[i][j];
        }
    }
    
    search(0);
    cout << ans;
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