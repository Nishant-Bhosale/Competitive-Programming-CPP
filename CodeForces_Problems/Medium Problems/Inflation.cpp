#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long li;
 
const int INF = int(1e9);
 
int main() {
  int t; cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];
    
    li x = 0;
    li pSum = p[0];
    for (int i = 1; i < n; i++) {
      x = max(x, (100ll * p[i] - k * pSum + k - 1) / k);
      pSum += p[i];
    }
    cout << x << endl;
  }
  return 0;
}