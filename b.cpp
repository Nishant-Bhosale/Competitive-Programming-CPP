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
      int a, b, c, d;

      cin>>a>>b>>c>>d;

      if(a < b){
         a += c;
      }else{
         b += c;
      }


      if(a == b){
         b += d;
      }else{
         if(a < b){
            a += d;
         }else{
            b += d;
         }
      }


      if(a >= b){
         cout<<"N"<<endl;
      }else{
         cout<<"S"<<endl;
      }
   }

   return 0;
}