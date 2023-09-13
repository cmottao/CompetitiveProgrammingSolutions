// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> a = {"0", "1"};

    for(int i = 0; i < n-1; i++) {
        for(int j = a.size()-1; j >= 0; j--) {
            a.push_back("1" + a[j]);
            a[j] = "0" + a[j];
        }
    }
    
    for(string s : a) {
        cout << s << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}