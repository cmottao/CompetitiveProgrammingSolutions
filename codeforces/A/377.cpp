#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;

pair<int, int> moves[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

int valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void solve() {
    int k; cin >> n >> m >> k;
    char a[n][m];
    int dst[n][m];
    queue<pair<int, int>> q;
    vector<pair<int, pair<int, int>>> x;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            dst[i][j] = -1;
            if(a[i][j] == '.' && q.empty()) q.push({i, j});
        }
    }
    dst[q.front().first][q.front().second] = 0;

    while(!q.empty()) {
        auto [ci, cj] = q.front(); q.pop();
        x.push_back({dst[ci][cj], {ci, cj}});

        for(auto [mi, mj] : moves) {
            int ni = ci + mi, nj = cj + mj;

            if(valid(ni, nj) && a[ni][nj] == '.' && dst[ni][nj] < 0) {
                dst[ni][nj] = dst[ci][cj] + 1;
                q.push({ni, nj});
            }
        }
    }
    sort(x.begin(), x.end());

    for(int i = x.size() - 1; i >= 0 && k; i--) {
        a[x[i].second.first][x[i].second.second] = 'X';
        k--;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}