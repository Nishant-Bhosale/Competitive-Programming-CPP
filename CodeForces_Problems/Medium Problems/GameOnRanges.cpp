#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int ntest;
    cin >> ntest;
    while (ntest--) {
        int n;
        cin >> n;
        vector mark(n + 1, vector<bool>(n + 1));
        vector<int> l(n), r(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
            mark[l[i]][r[i]] = true;
        }
        for (int i = 0; i < n; ++i) {
            for (int d = l[i]; d <= r[i]; ++d) {
                if ((d == l[i] or mark[l[i]][d - 1]) and (d == r[i] or mark[d + 1][r[i]])) {
                    cout << l[i] << ' ' << r[i] << ' ' << d << '\n';
                    break;
                }
            }
        }
    }
    
    return 0;
}