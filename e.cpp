#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   long double x, y;
   cin>>x>>y;

   long double logx = log10(x);
   long double logy = log10(y);
   if(abs(logx * y - logy * x) < 1e-8 ){
      cout<<"="<<endl;
      return 0;
   }

   if(logx * y < logy * x){
      cout<<"<"<<endl;
   }else{
      cout<<">"<<endl;
   }
   return 0;
}