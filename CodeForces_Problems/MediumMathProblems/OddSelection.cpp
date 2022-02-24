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
      ll n, x;
      cin>>n>>x;

      ll cntEven = 0, cntOdd = 0;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         if(num % 2 == 0){
            cntEven++;
         }else{
            cntOdd++;
         }
      }

      ll val = min(cntOdd, x);
      bool flag = false;
      for(ll i = 1; i <= val; i+=2){
         if(cntEven >= (x - i)){
            flag = true;
         }
      }

      cout<<(flag ? "Yes" : "No")<<endl;
   }   

   return 0;
}