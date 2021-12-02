#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      long long u, v;

      cin>>u>>v;
      
      long long x;
      long long y;

      x = -1 * u * u;
      y = v * v;
      
      cout<<(x)<<" "<<(y)<<endl;
   }
   return 0;
}