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

      vector<ll> arr;
      ll cntEv = 0, cntOdd = 0;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         if(num % 2 == 0){
            cntEv++;
         }else{
            cntOdd++;
         }
         arr.emplace_back(num);
      }

      if(cntEv == n || cntOdd == n){
         cout<<"YES"<<endl;
         continue;
      }

      if(cntEv % 2 == 0 && cntOdd % 2 == 0){
         cout<<"YES"<<endl;
         continue;
      }

      bool flag = false;
      sort(arr.begin(), arr.end());

      for(ll i = 0; i < n - 1; i++){
         if(abs(arr[i] - arr[i + 1]) == 1){
            flag = true;
            break;
         }
      }
      // for(ll i = 0; i < n; i++){
      //    for(ll j = i; j < n; j++){
      //       if(abs(arr[i] - arr[j]) == 1){
      //          flag = true;
      //          break;
      //       }
      //    }
      // }

      cout<<(flag ? "YES" : "NO")<<endl;
   }

   return 0;
}