// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a;
    map<int, int> c;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(c[ai % 10] < 3) {
            a.push_back(ai % 10);
            c[ai % 10]++;
        }
    }
    n = a.size();

    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                if((a[i] + a[j] + a[k]) % 10 == 3) {
                    cout << "YES" << '\n';
                    return; 
                }
            }
        }
    }
    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}