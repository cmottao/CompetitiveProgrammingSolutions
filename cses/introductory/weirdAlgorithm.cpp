//Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}

int main() {
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++){
        // cout << "Case #" << t << ": ";
        solve();
  }
  return 0;
}