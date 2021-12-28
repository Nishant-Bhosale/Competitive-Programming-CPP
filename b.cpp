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
      cin>>n;

      if(n == 1){
         cout<<1<<"\n"<<1<<" "<<1<<"\n";
      }else if(n == 2){
         cout<<2<<"\n"<<3<<" "<<1<<"\n"<<4<<" "<<1<<"\n";
      }else if(n == 3){
         cout<<2<<"\n"<<1<<" "<<1<<"\n"<<2<<" "<<2<<"\n";
      }else if(n == 4){
         cout<<1<<"\n"<<1<<" "<<4<<"\n";
      }else{
         cout<<2<<"\n"<<2<<" "<<n-1<<"\n"<<(n-2)<<" "<<1<<"\n";
      }

   }

   return 0;
}