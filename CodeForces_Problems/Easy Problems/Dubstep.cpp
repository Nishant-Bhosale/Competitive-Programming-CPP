#include<iostream>
using namespace std;

int main(){
   char wub;
   int count = 0;
   while(cin>>wub){
      if(wub != 'W' && wub != 'U' && wub != 'B'){
         cout<<wub;
         count++;
      }
      if(count > 0 && wub == 'W'){
         cout<<" ";
         count = 0;
      }
   }

   return 0;
}