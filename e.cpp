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
      int n;
      cin>>n;

      vector<int> arr(n+1);
      for(int i = 1; i <= n; i++){
         cin>>arr[i];
      }

      if(n == 1){
         cout<<arr[1]<<endl;
         continue;
      }

      
      if(is_sorted(arr.begin(), arr.end())){
         for(int i = 1; i <= n; i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
         continue;
      }

      for(int i = 1; i <= n; i++){
         int idx = find(arr.begin(), arr.end(), i) - arr.begin();
         if(idx == i){
            continue;
         }else{
            ll pt = find(arr.begin(), arr.end(), i) - arr.begin();
            reverse(arr.begin() + i, arr.begin() + pt + 1);
            break;
         }
      }

      for(int i = 1; i <= n; i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}