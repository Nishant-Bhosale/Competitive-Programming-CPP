#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   int n;
   cin>>n;

   vector<ll> arr;

   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   for(int i = 0; i < n; i++){
      if((i + 1) % 2 == 0){
         if(!(arr[i] <= 0)){
            arr[i] *= -1;
         }
      }else{
         if(!(arr[i] >= 0)){
            arr[i] *= -1;
         }
      }
   }

   for(int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}