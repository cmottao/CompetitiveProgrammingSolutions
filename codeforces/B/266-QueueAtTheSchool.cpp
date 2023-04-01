// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 50 + 10;
const int MIN = -MAX;

void solve() {
    int n; 
    cin >> n;
    int t; 
    cin >> t;
    string s; 
    cin >> s;
    string s2 = s;
    char boy = 'B';
    char girl = 'G';

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < s.length() - 1; j++) {
            if(s[j] == boy && s[j + 1] == girl) {
                s2[j] = girl;
                s2[j + 1] = boy;
            }
        }
        s = s2;
    }
    cout << s;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}