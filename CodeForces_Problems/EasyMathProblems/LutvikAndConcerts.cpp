#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int a,b,c;
      cin>>a>>b>>c;

      int sum = a + 2*b + 3*c;

      if(sum % 2 == 0){
        cout<<0<<endl; 
      }else{
         cout<<1<<endl;
      }
   }

   return 0;
}