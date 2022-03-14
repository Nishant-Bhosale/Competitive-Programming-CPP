#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j)
            a[i][j] = s[j] - '0';
    }
    vector<array<int, 4>> ans;
    if (a[0][0] == 1) {
        cout << -1<< '\n';
        return;
    }
    
    for (int j = m - 1; j >= 0; --j) {
        for (int i = n - 1; i >= 0; --i) {
            if (a[i][j]) {
                if (i != 0) {
                    ans.push_back({i, j + 1, i + 1, j + 1});
                } else {
                    ans.push_back({i + 1, j, i + 1, j + 1});
                }
            }
        }
    }
    cout << ans.size() << '\n';
    for (auto i : ans) {
        cout << i[0] << ' ' << i[1] << ' ' << i[2] << ' ' << i[3] << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
        solve();
}