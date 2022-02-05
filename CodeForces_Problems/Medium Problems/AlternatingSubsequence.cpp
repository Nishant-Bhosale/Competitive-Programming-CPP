#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool par(ll num){
   if(num >= 0){
      return true;
   }
   return false;
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n;
      cin>>n;

      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      ll sum = 0;

      for(int i = 0; i < n; i++){
         ll current = arr[i];
         ll j = i;
         while(j < n && par(arr[i]) == par(arr[j])){
            current = max(current, arr[j]);
            j++;
         }
         sum += current;
         i = j - 1;
      }
      cout<<sum<<endl;
   }

   return 0;
}