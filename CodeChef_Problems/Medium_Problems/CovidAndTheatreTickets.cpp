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
      ll n, m;
      cin>>n>>m;

      if(m % 2 == 0){
         if(n % 2 == 0){
            cout<<((m/2) * (n/2))<<endl;
         }else{
            cout<<((m/2) * (n/2 + 1))<<endl;
         }
      }else{
         if(n % 2 == 0){
            cout<<((m/2 + 1) * (n/2))<<endl;
         }else{
            cout<<((m/2 + 1) * (n/2 + 1))<<endl;
         }
      }
   }

   return 0;
}