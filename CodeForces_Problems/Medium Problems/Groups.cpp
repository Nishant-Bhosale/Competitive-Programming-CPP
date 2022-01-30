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
      ll n;
      cin>>n;

      ll arr[n][5];
      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < 5; j++){
            cin>>arr[i][j];
         }
      }

      bool ans = false;

      for(int j = 0; j < 5; j++){
         for(int k = 0; k < 5; k++){
            if(k != j){
               ll cnt1 = 0;
               ll cnt2 = 0;
               ll cntNo = 0;
               for(int z = 0; z < n; z++){
                  if(arr[z][j] == 1){
                     cnt1++;
                  }
                  if(arr[z][k] == 1){
                     cnt2++;
                  }
                  if(arr[z][j] == 0 && arr[z][k] == 0){
                     cntNo++;
                  }
               }

               if(cnt1 >= n / 2 && cnt2 >= (n / 2) && cntNo == 0){
                  ans = true;
               }
            }
         }
      }

      if(ans){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}