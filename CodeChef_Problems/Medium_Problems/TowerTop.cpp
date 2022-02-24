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
      long long int hei, ops;

      cin>>hei>>ops;

      long long int minNum = (ceil(log2l(hei)) + 1);
      if(ops < minNum){
         cout<<0<<endl;
         continue;
      }
      cout<<(ops - minNum + 1)<<endl;
   }

   return 0;
}