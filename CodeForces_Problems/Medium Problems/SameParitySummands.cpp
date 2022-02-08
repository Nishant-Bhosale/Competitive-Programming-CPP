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
         cout<<n<<endl;
         continue;
      }
      if(n == k){
         cout<<"YES"<<endl;
         for(ll i = 0; i < n; i++){
            cout<<1<<" ";
         }
         cout<<endl;
         continue;
      }

      if((k % 2 == 0 && n % 2 == 1) || n < k){
         cout<<"NO"<<endl;
         continue;
      }

      if(k == (n - 1)){
         cout<<"NO"<<endl;
         continue;
      }

      if(n % k == 0){
         cout<<"YES"<<endl;
         for(ll i = 0; i < k; i++){
            cout<<(n / k)<<" ";
         }
         cout<<endl;
         continue;
      }

      // if(k > (n / 2) && (k % 2 == 0 && n % 2 == 0)){
      //    cout<<"NO"<<endl;
      //    continue;
      // }

      if(k % 2 == 1 && n % 2 == 1){
         cout<<"YES"<<endl;
         cout<<(n - k + 1)<<" ";
         for(ll i = 0; i < k - 1; i++){
            cout<<1<<" ";
         }
         cout<<endl;
         continue;
      }
      if(k % 2 == 1 && n % 2 == 0){
         if(n > 2*k){
            cout<<"YES"<<endl;
            cout<<(n - (k - 1)*2)<<" ";
            for(ll i = 0; i < k - 1; i++){
               cout<<2<<" ";
            }
            cout<<endl;  
         }else{
            cout<<"NO"<<endl;
         }
         continue;
      }

      if(k % 2 == 0 && n % 2 == 0){
         cout<<"YES"<<endl;
         if(n > 2*k){
            cout<<(n - (k - 1)*2)<<" ";
            for(ll i = 0; i < k - 1; i++){
               cout<<2<<" ";
            }
            cout<<endl;
         }else{
            cout<<((n - k) + 1)<<" ";
            for(ll i = 0; i < k - 1; i++){
               cout<<1<<" ";
            }
            cout<<endl;
         }
      }
   }

   return 0;
}