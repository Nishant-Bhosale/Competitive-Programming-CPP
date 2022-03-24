#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

vector<ll> arr;

void pre_calc(){
   ll num = 1;

   for(ll i = 0; i < 1e5; i++){
      arr.emplace_back(num);
      num = ((num * 2) + 1);
   }
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   pre_calc();
   ll t;
   cin>>t;
   
   while(t--){
      ll n;
      cin>>n;

      n--;
      ll cnt = 1;
      for(ll i = 0; i < 1e9 - 1; i++){
         if(arr[i] < n && arr[i + 1] > n){
            break;
         }

         // if(arr[i] == n){
         //    cnt--;
         // }
         cnt++;
      }

      cout<<cnt<<endl;
   };

   return 0;
}