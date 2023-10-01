// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10;

int pre[MAX], nxt[MAX];

void solve(int s, int b) {
    for(int i = 1; i <= s; i++) {
        pre[i] = i - 1; nxt[i] = i + 1;
    }

    for(int i = 0; i < b; i++) {
        int l, r; cin >> l >> r;
        nxt[pre[l]] = nxt[r];
        pre[nxt[r]] = pre[l];

        if(!pre[l]) {
            cout << "* "; 
        }
        else {
            cout << pre[l] << ' ';
        }

        if(nxt[r] == s + 1) {
            cout << '*' << '\n';
        }
        else {
            cout << nxt[r] << '\n';
        }
    }
    cout << '-' << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int s, b;
    while(cin >> s >> b && (s || b)) solve(s, b);
}