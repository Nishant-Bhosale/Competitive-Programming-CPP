#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, m;
   cin>>n>>m;

   vector<ll> arr;
   for(ll i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   if(n == 1){
      cout<<(arr[0] + m)<<" "<<(arr[0] + m)<<endl;
   }else{
      ll maxVal = *max_element(arr.begin(), arr.end());
      maxVal += m;

      sort(arr.begin(), arr.end());
      while(m){
         sort(arr.begin(), arr.end());
         arr[0]++;
         m--;
      }

      ll minVal = *max_element(arr.begin(), arr.end());

      cout<<minVal<<" "<<maxVal<<endl;
   }

   return 0;
}