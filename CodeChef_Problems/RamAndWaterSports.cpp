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
      ll z, y, a, b, c;

      cin>>z>>y>>a>>b>>c;

      int rem = z - y;

      if(a + b + c <= rem){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}