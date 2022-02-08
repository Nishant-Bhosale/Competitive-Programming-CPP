#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;


int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, k;
   cin>>n>>k;

   vector<int> a;
   vector<int> b;

   for(int i = 0; i < n; i++){
      int num;
      cin>>num;
      a.emplace_back(num);
   }
   for(int i = 0; i < n; i++){
      int num;
      cin>>num;
      b.emplace_back(num);
   }

   while(k){
      int ans = INT_MAX;
      for(int i = 0; i < n; i++){
         ans = min(ans, b[i] / a[i]);
      } 

      int rem = INT_MAX;
      for(int i = 0; i < n; i++){
         if(b[i] / a[i] == ans){
            rem = min(rem, b[i] % a[i]);
         }
      } 

      int idx;
      for(int i = 0; i < n; i++){
         if(b[i] / a[i] == ans && b[i] % a[i] == rem){
            idx = i;
            break;
         }
      } 

      if(k >= a[idx] - rem){
         k -= a[idx] - rem;
         b[idx] += a[idx] - rem;
      }else{
         k = 0;
         break;
      }
   }

   int minVal = INT_MAX;
   for(int i = 0; i < n; i++){
      minVal = min(minVal, b[i]/a[i]);
   }

   cout<<minVal<<endl;
   
   return 0;
}