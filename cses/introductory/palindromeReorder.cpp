// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string st; cin >> st;
    string left = "", right, middle = "";
    map<char, int> counts;
    int odds = 0;

    for(char ch : st) {
        counts[ch]++;
    }

    for(auto p : counts) {
        if(p.second % 2 != 0) {
            if(!odds) {
                middle += string(p.second, p.first);
                odds++;
            }
            else {
                cout << "NO SOLUTION";
                return;
            }
        }
        else {
            left += string(p.second / 2, p.first);
        }
    }
    right = left; reverse(right.begin(), right.end());
    cout << left + middle + right;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}