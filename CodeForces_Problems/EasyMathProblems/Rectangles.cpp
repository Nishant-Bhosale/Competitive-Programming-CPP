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
      ll a, b, c;
      cin>>a>>b>>c;

      if(a+b == c || b+c == a || c+a == b){
         cout<<"YES"<<"\n";
         continue;
      }

      if(a == b && c % 2 == 0){
         cout<<"YES"<<endl;
         continue;
      }
      if(c == b && a % 2 == 0){
         cout<<"YES"<<endl;
         continue;
      }
      if(a == c && b % 2 == 0){
         cout<<"YES"<<endl;
         continue;
      }else{
         cout<<"NO"<<endl;
      }  
   }

   return 0;
}