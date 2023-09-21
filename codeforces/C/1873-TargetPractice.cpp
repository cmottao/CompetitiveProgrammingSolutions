// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int ans = 0;

    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            char gij; cin >> gij;

            if(gij == 'X') {
                if(i >= 5 && i <= 6 && j >= 5 && j <= 6) {
                    ans += 5;
                }
                else if(i >= 4 && i <= 7 && j >= 4 && j <= 7) {
                    ans += 4;
                }
                else if(i >= 3 && i <= 8 && j >= 3 && j <= 8) {
                    ans += 3;
                }
                else if(i >= 2 && i <= 9 && j >= 2 && j <= 9) {
                    ans += 2;
                }
                else {
                    ans++;
                }                
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}