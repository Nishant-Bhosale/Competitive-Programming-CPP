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
      ll n, a;
      cin>>n>>a;

      if(a % 2 != 0){
         if(n % 2 != 0){
            cout<<"ODD"<<endl;
         }else{
            cout<<"EVEN"<<endl;
         }
      }else if(n == 1){
         cout<<"EVEN"<<endl;
      }else{
         cout<<"IMPOSSIBLE"<<endl;
      }
   }

   return 0;
}