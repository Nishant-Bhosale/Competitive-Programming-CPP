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
      ll n;
      cin>>n;

      vector<int> nums(n);
      vector<int> res(n + 1);
      for(int i = 0; i < n; i++){
         cin>>nums[i];
      }

      for(int i = 0; i < n; i++){
         int maxVal = 1;
         for(int j = i; j < n; j++){
            maxVal *= nums[j];
            res[j - i + 1] = max(res[j - i + 1], maxVal);
         }
      }

      int ans = *max_element(all(res));
      cout<<ans<<"\n";
   };

   return 0;
}