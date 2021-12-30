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
      int n;
      cin>>n;

      vi arr;
      vector<int> cnt(3);
      int cnt0 = 0, cnt1 = 0, cnt2 = 0;
      for(int i = 0; i < n; i++){
         int num; cin>>num;
         arr.emplace_back(num);
      }
      
      for(int x = 0; x < 3; x++){
         for(int i = 0; i < n; i++){
            if(arr[i] % 3 == x){
               cnt[x]++;
            }
         }
      }

      int ans = 0;
      while(*min_element(cnt.begin(), cnt.end()) != n / 3){
         for(int i = 0; i < 3; i++){
            if(cnt[i] > n / 3){
               ans++;
               cnt[i]--;
               cnt[(i + 1) % 3]++;
            }
         }
      }

      cout<<ans<<endl;
   }

   return 0;
}