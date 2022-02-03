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

      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      ll minVal = INT_FAST64_MAX, cnt = 0;

      for(int i = n - 1; i >= 0; i--){
         if(arr[i] > minVal){
            cnt++;
         }
         minVal = min(minVal, arr[i]);
      }

      cout<<cnt<<endl;
   }

   return 0;
}