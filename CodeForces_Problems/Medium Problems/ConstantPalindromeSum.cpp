#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n, k;
      cin>>n>>k;

      vi arr;
      vi pre;

      for(int i = 0; i < n; i++){
         int num;cin>>num;
         arr.emplace_back(num);
      }

      for(int i = 0; i < 2 * k + 10; i++){
         pre.emplace_back(0);
      }

      map<int,int> mp;
      vector<pair<int,int>> vec;
      for(int i = 0; i < n/2; i++){
         vec.emplace_back(min(arr[i], arr[n - i - 1]), max(arr[i], arr[n - i - 1]));
      }

      for(auto it : vec){
         int l = it.first + 1;
         int r = it.second + k;

         mp[it.first + it.second]++;

         pre[l] += 1;
         pre[r + 1] -= 1;
      }

      int sum = 0;

      for(int i = 0; i < 2 * k + 10; i++){
         sum += pre[i];
         pre[i] = sum;
      }

      int minE = n;

      for(int i = 2; i <= 2 * k; i++){
         int cnt0 = mp[i];
         int cnt1 = pre[i] - cnt0;
         int cnt2 = (n / 2) - (cnt1) - cnt0;
         int cnt = cnt1 + (cnt2 * 2);
         minE = min(minE, cnt);
      }

      cout<<minE<<endl;
   }

   return 0;
}