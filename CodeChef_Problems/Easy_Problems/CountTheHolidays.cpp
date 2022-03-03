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

      rep(0, n){
         cin>>arr[i];
      }

      sort(arr.begin(), arr.end());

      set<ll> holidays;
      holidays.insert(6);
      holidays.insert(7);
      holidays.insert(13);
      holidays.insert(20);
      holidays.insert(27);
      holidays.insert(14);
      holidays.insert(21);
      holidays.insert(28);

      for(ll i = 0; i < n; i++){
         holidays.insert(arr[i]);
      }
      cout<<holidays.size()<<endl;
   }

   return 0;
}