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
      map<int, int> mp;
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         mp[abs(num)]++;
      }
      int cnt = 0;
      for(auto it: mp){
         if(it.first == 0){
            cnt += 1;
         }
         else if(it.second >= 2){
            cnt += 2;
         } else{
            cnt++;
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}