#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

      ll t;
      cin>>t;
      while(t--){
            int n;
            cin >> n;
            vector<int> v(n);
            for (int i = 0; i < n; i++) {
                  cin >> v[i];
            }
      
            // lis stores the current lis
            // pref stores the longest increasing subsequence till i
            vector<int> lis, pref(n);
            for (int i = 0; i < n; i++) {
                  auto it = lower_bound(all(lis), v[i]) - lis.begin();
                  if (it == lis.size()) lis.push_back(v[i]);
                  else lis[it] = v[i];
                  pref[i] = lis.size();
            }
      
            lis.clear();
            // suff stores the longest increasing subsequence starting from i
            vector<int> suff(n);
            for (int i = n - 1; i >= 0; i--) {
                  auto it = lower_bound(all(lis), -v[i]) - lis.begin();
                  if (it == lis.size()) lis.push_back(-v[i]);
                  else lis[it] = -v[i];
                  suff[i] = lis.size();
            }
      
            int ans = suff[0];
            for (int i = 1; i < n; i++) {
                  ans = max(ans, suff[i] + pref[i - 1]);
            }
            cout <<ans<<endl;
      };

      return 0;
}