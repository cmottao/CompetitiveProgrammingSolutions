// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3 + 10;

pair<int, int> moves[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
map<pair<int, int>, char> path = {{{1, 0}, 'D'}, {{0, 1}, 'R'}, {{-1, 0}, 'U'}, {{0, -1}, 'L'}};
pair<int, int> parent[MAX][MAX];
char l[MAX][MAX];

void solve() {
    int n, m; cin >> n >> m;
    pair<int, int> a, b;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            parent[i][j] = {-1, -1};
            cin >> l[i][j];

            if(l[i][j] == 'A') {
                parent[i][j] = {-2, -2};
                a = {i, j};
            }
            else if(l[i][j] == 'B') {
                b = {i, j};
            }
        }
    }

    queue<pair<int, int>> q; 
    q.push(a);

    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();

        for(int i = 0; i < 4; i++) {
            pair<int, int> nxt = {cur.first + moves[i].first, cur.second + moves[i].second};

            if(nxt.first < n && nxt.first >= 0 && nxt.second < m && nxt.second >= 0 && parent[nxt.first][nxt.second].first == -1 && l[nxt.first][nxt.second] != '#') {
                parent[nxt.first][nxt.second] = cur;
                q.push(nxt);
            }
        }
    }

    if(parent[b.first][b.second].first == -1) {
        cout << "NO";
    }
    else {
        cout << "YES" << '\n';
        string ans = "";

        while(b != a) {
            ans += path[{b.first - parent[b.first][b.second].first, b.second - parent[b.first][b.second].second}];
            b = parent[b.first][b.second];
        }
        reverse(ans.begin(), ans.end());

        cout << ans.size() << '\n';
        cout << ans;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}