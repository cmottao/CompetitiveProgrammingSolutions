// Made by Cristian Motta (cmottao) 
#include <bits/stdc++.h> 
using namespace std; 
  
#define int long long int 
#define double long double 
  
const int MAX = 1e6 + 10; 
const int MIN = -MAX; 
const int MOD = 1e9 + 7; 
const int oo = 1e9; 
  
void solve() { 
    int a, b, c; cin >> a >> b >> c;
    int s = a + b + c;

    if(s % 9 != 0) {
        cout << "NO" << '\n';
    }
    else {
        if(min(a, min(b, c)) >= s / 9) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
} 
  
int32_t main() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 
  
    int tc = 1; 
    cin >> tc; 
  
    for(int t = 1; t <= tc; t++) { 
        solve(); 
    } 
    return 0; 
}