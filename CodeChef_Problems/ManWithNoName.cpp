#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      vector<ll> arr(n);
      ll sum = 0;
      ll cnt = 0;
      for(int i = 0; i < n; i++){
         cin>>arr[i];
      }

      for(int i = 0; i < n; i++){
         if(arr[i] == -1){
            arr[i] = sum / cnt;
         }
         sum += arr[i];
         cnt++;
      }

      for(int i = 0; i < n; i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}