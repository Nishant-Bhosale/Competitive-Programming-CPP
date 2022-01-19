#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   if(n < 4){
      cout<<(n+1)<<endl;
   }else{
      int sqr = sqrt(n);

      if(sqr * sqr >= n){
         cout<<(sqr * 2)<<endl;
      }else{
         if(sqr * (sqr + 1) >= n){
            cout<<((sqr*2) + 1)<<endl;
         }else{
            if((sqr + 1) * (sqr + 1) >= n){
               cout<<((2*sqr) + 2)<<endl;
            }
         }

      }
   }

   return 0;
}