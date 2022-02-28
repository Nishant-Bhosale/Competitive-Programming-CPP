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

   while (t--){
      ll n;
      cin>>n;
      n += 2;
      vector<ll> arr;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end());

      ll sum1 = 0;
      for(ll i = 0; i < n - 2; i++){
         sum1 += arr[i];
      }

      if(sum1 == arr[n - 2] || sum1 == arr[n - 1]){
         for(ll i = 0; i < n - 2; i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
         continue;
      }

      ll flag = -1;
      for(ll i = 0; i < n - 2; i++){
         if(sum1 - arr[i] + arr[n - 2] == arr[n - 1]){
            flag = i;
            break;
         }
      }

      if(flag == -1){
         cout<<-1<<endl;
      }else{
         for(ll i = 0; i < (n - 1); i++){
            if(i != flag){
               cout<<arr[i]<<" ";   
            }
         }
         cout<<endl;
      }
   }
   

   return 0;
}