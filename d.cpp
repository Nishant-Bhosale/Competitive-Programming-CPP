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
      ll hei, ops;

      cin>>hei>>ops;
      //Brute force

      ll inv = 1, currH = 0;

      while(ops){
         currH += inv;
         inv = 0;
         inv += currH;
         ops--;
      }

      cout<<inv<<endl;
      cout<<currH<<endl;
   }

   return 0;
}