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
      int n, k;
      cin>>n>>k;

      vector<long long> arr;
      ll sum = 0;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         sum += num;
         arr.emplace_back(num);
      }

      if(n == 1){
         cout<<abs(arr[0] - k)<<endl;
         continue;
      }

      if(sum <= num){
         for(auto it : arr){
            cout<<arr<<" ";
         }
         cout<<endl;
         continue;
      }

      sort(arr.begin(), arr.end());
      ll maxEl = arr[arr.size() - 1];
      ll minEl = arr[0];

      
   }

   return 0;
}