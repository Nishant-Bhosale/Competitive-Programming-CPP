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
      ll r,g,b;
      cin>>r>>g>>b;
      vector<ll> arr;
      arr.emplace_back(r);
      arr.emplace_back(g);
      arr.emplace_back(b); 

      if(r == 1 && g == 1 && b == 1){
         cout<<1<<endl;
      }else{
         sort(arr.begin(), arr.end(), greater<ll>());
         if(arr[0] >= arr[1] + arr[2]){
            cout<<(arr[2] + arr[1])<<endl;
         }else{
            cout<<((r+g+b)/2)<<endl;
         }
      }
   }

   return 0;
}