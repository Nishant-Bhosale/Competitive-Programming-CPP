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
      ll n;
      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num; 
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end());

      ll number = 1;
      ll idx = 0;

      while(arr[idx] != number && idx < n){
         if(arr[idx] == number){
            idx++;
            number++;
         }

         arr[idx] /= 2;
      }
   }

   return 0;
}