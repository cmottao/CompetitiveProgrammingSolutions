// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[3][n];
    long long s = 0; 

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(!i) s += a[i][j];
        }
    }

    auto f = [&](long long &sum, long long &idx, int bgn, int ply) {
        sum = 0, idx = bgn;

        while((idx < n) && (sum < (s + 2) / 3)) {
            sum += a[ply][idx];
            idx++;
        }
    };
    
    long long s1, i;
    f(s1, i, 0, 0);


    long long s2, j;
    f(s2, j, i, 2);



    long long s3, k;
    f(s3, k, j, 1);

    cout << s1 << ' ' << s2 << ' ' << s3 << '\n';

    if((s1 >= (s + 2) / 3) && (s2 >= (s + 2) / 3) && (s3 >= (s + 2) / 3)) cout << "let me cook" << '\n';
    else cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}