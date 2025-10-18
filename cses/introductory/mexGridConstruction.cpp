// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            set<int> st;

            for(int k = 0; k < i; k++) {
                st.insert(a[k][j]);
            }
            for(int k = 0; k < j; k++) {
                st.insert(a[i][k]);
            }

            for(int k = 0; k <= st.size(); k++) {
                if(!st.count(k)) {
                    a[i][j] = k;
                    break;
                }
            }
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}