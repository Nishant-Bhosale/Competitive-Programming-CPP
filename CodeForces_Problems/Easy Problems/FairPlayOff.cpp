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
      vector<ll> arr(4);
      for(ll i = 0; i < 4; i++){
         cin>>arr[i];
      }

      vector<ll> temp = arr;
      sort(temp.begin(), temp.end());

      ll max1 = max(arr[0], arr[1]);
      ll max2 = max(arr[2], arr[3]);

      if((max1 == temp[3] || max1 == temp[2]) && (max2 == temp[3] || max2 == temp[2])){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}