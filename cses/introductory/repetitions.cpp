// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string acg; cin >> acg;
    int dna = 1, s = 1;

    for(int i = 0; i < acg.size()-1; i++) {
        if(acg[i] == acg[i + 1]) {
            s += 1;
        }
        else {
            dna = max(dna, s);
            s = 1;
        }        
    }
    dna = max(dna, s);
    cout << dna;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}