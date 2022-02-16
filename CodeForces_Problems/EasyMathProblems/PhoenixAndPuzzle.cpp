#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool isSquare ( ll num ){
   ll sqr = sqrt(num);
   if(sqr*sqr == num){
      return true;
   }
   return false;
}
 
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n; 
      cin>>n;

      if(n == 1){
         cout<<"NO"<<endl;
         continue;
      }
      if(isSquare(n / 2) && n % 2 == 0){
         cout<<"YES"<<endl;
         continue;
      }
      
      if(isSquare(n / 4) && n % 4 == 0){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}