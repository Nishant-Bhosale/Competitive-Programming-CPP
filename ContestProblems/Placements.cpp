#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      char first, second, third;
      char c1, c2;
      cin>>first>>second>>third;

      cin>>c1>>c2;

      if(first == c1 || first == c2){
         cout<<first<<endl;
         continue;
      }else if(second == c1 || second == c2){
         cout<<second<<endl;
         continue;
      }else if(third == c1 || third == c2){
         cout<<third<<endl;
         continue;
      }
   }

   return 0;
}