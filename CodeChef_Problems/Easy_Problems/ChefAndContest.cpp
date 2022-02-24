#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int x,y,p,q;

      cin>>x>>y>>p>>q;

      int chef1, chef2;

      chef1 = x + p*10;
      chef2 = y + q*10;

      if(chef1 < chef2){
         cout<<"Chef"<<endl;
      }
      if(chef1 == chef2){
         cout<<"Draw"<<endl;
      }
      if(chef1 > chef2){
         cout<<"Chefina"<<endl;
      }
   }
   return 0;
}