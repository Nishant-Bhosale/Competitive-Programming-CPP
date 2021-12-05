#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int x,y,a,b;

      cin>>x>>y>>a>>b;

      if(x == a && y == b){
         cout<<0<<endl;
         continue;
      }

      int minVal = abs(a - x) + abs(b - y);

      cout<<minVal<<endl; 
   }

   return 0;
}