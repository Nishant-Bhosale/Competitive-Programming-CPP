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
      ll L, v, l, r;
      cin>>L>>v>>l>>r;

      ll numOfPoints = L / v;

      cout<<(numOfPoints - (r / v) + (l - 1) / v)<<endl;
   }

   return 0;
}