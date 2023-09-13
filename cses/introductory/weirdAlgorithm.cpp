// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    cout << n << ' '; 
    
    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        cout << n << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}