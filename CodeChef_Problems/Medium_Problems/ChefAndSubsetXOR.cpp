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
      ll n, x, y;
      cin>>n>>x>>y;

      vector<ll> arr1;
      vector<ll> arr2;
      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr1.emplace_back(num);
      }

      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr2.emplace_back(num);
      }

      bool flag = true;

      for(int i = 0; i < n; i++){
         if(abs(arr1[i] - arr2[i]) == x || abs(arr1[i] - arr2[i]) == y){
            continue;
         }else{
            flag = false;
            break;
         }
      }

      cout<<(flag ? "YES" : "NO")<<endl;
   }

   return 0;
}