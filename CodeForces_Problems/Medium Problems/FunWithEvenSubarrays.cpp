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
      vector<ll> arr(n);
      for(int i = 0; i < n; i++){
         cin>>arr[i];
      }

      if(count(arr.begin(), arr.end(), arr[0]) == n){
         cout<<0<<endl;
         continue;
      }

      ll lastEl = arr[arr.size() - 1];
      ll end = 0;
      ll cnt = 0;

      for(ll j = n - 1; j >= 0; j--){
         if(arr[j] == lastEl){
            end++;
         }else{
            j -= end;
            end += end;
            cnt++;
            j++;
         }
      }
      cout<<cnt<<endl;
   }

   return 0;
}