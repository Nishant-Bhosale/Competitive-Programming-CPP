#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n, k;
      cin>>n>>k;
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) cin>>arr[i];

      bool flag = false;

      if(n == 1){
         if(arr[0] == k){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
         continue;
      }

      sort(all(arr));

      ll i = 0, j = 1;

      while(i < n && j < n){
         if(arr[i] + abs(k) == arr[j]){
            flag = true;
            break;
         }else if(arr[i] + abs(k) < arr[j]){
            i++;
         }else{
            j++;
         }
      }

      cout<<(flag ? "YES" : "NO")<<endl;
   };

   return 0;
}