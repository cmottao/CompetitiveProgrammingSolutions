// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

pair<int, int> moves[] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

void solve() {
    int n; cin >> n;
    vector<vector<int>> dst(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    q.push({0, 0});
    dst[0][0] = 0;

    auto valid = [&](int i, int j) -> bool {
        return i < n && i >= 0 && j < n && j >= 0;
    };

    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();

        for(int i = 0; i < 8; i++) {
            pair<int, int> nxt = {cur.first + moves[i].first, cur.second + moves[i].second};
            
            if(valid(nxt.first, nxt.second) && dst[nxt.first][nxt.second] == -1) {
                dst[nxt.first][nxt.second] = dst[cur.first][cur.second] + 1;
                q.push(nxt);
            }
        } 
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << dst[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}