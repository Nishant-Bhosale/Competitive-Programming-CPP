#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   vector<ll> arr;
   ll sum = 0;
   int cnt = 0;
   ll mx = -2e9;
   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      if(num >= 0){
         arr.emplace_back(num);
         sum += num;
         cnt++;
      }
      mx = max(mx, num);
   }
   
   if(cnt) cout<<sum<<" "<<cnt<<endl;
   else cout<<mx<<" "<<1<<endl;
   
   return 0;
}