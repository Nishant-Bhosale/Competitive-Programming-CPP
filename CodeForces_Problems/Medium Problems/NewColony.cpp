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
      ll n, k;
      cin>>n>>k;

      vector<ll> arr;

      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      ll pos = 1;
      for(int b = 0; b < k; b++){
         pos = 1;
         for(int i = 0; i < n - 1; i++){
            if(arr[i] >= arr[i + 1]){
               pos += 1;
            }else if(arr[i] < arr[i + 1]){
               arr[i] = arr[i] + 1;
               break;
            }
         }
         if(pos == n){
            break;
         }
      }

      if(pos != n){
         cout<<pos<<endl;
      }else{
         cout<<-1<<endl;
      }
   }

   return 0;
}