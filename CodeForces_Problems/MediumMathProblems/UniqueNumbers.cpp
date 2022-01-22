#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      vector<int> ans;
      
      int sum = 0, last = 9;
      while(sum < n && last > 0){
         ans.emplace_back(min(last, n - sum));
         sum += last;
         last--;
      }.

      if(sum < n){
         cout<<-1<<endl;
      }else{
         reverse(ans.begin(), ans.end());

         for(int i = 0; i < ans.size(); i++){
            cout<<ans[i];
         }
         cout<<endl;
      }
   }

   return 0;
}