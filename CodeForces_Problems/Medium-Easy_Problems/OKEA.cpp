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
      ll n, k;
      cin>>n>>k;

      if(k == 1){
         cout<<"YES"<<endl;
         for(ll i = 1; i <= n; i++){
            cout<<i<<endl;
         }
      }else{
         if(n % 2 == 1){
            cout<<"NO"<<endl;
         }else{
            cout<<"YES"<<endl;
            for(ll i = 1; i <= n; i++){
               for(ll j = 0; j < k; j++){
                  cout<<(i + n*j)<<" ";
               }
               cout<<endl;
            }          
         }
      }

   }

   return 0;
}