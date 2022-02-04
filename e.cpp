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
      ll a, b;
      cin>>a>>b;

      if(a == b){
         a += a;
         cout<<(a * a)<<endl;
         continue;
      }

      if(a % 2 == 1 && b % 2 == 1){
         ll maxVal = max(a, b);
         cout<<(maxVal * maxVal)<<endl;
      }else{
         a += a;
         b += b;

         ll minVal = min(a, b);

         cout<<(minVal * minVal)<<endl;
      }
   }

   return 0;
}