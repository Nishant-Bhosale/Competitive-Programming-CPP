#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;

      if(n % 2 == 0){
         cout<<(n / 2)<<endl;
      }else{
         cout<<(((n + 1) / 2) * (-1))<<endl;
      }
      // ll i = 1;
      // ll pos = 0;
      // while(n--){
      //    if(pos >= 0){
      //       pos -= i;
      //    }else{
      //       pos += i;
      //    }
      //    i++;
      // }

      // cout<<pos<<endl;
   };

   return 0;
}