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
      string s;
      cin>>s;
      int oneCnt = 0, zCnt = 0;

      for(int i = 0; i < n; i++){
         if(s[i] == '1'){
            oneCnt++;
         }else{
            zCnt++;
         }
      }

      int ans = max(0, min(oneCnt, zCnt) - 1);
      cout<<ans<<"\n";
   }

   return 0;
}