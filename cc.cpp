#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      long long x1 = 0, p1 = 0, x2 = 0, p2 = 0;
      long long firstNum = 0;
      long long secondNum = 0;

      cin>>x1>>p1; 
      firstNum = x1 * pow(10.00, p1) + 0.5;
      cin>>x2>>p2;
      secondNum = x2 * pow(10.00, p2) + 0.5;

      if(firstNum < secondNum){
         cout<<"<"<<endl;
      }else if(firstNum == secondNum){
         cout<<"="<<endl;
      }else if(firstNum > secondNum){
         cout<<">"<<endl;
      }
   }

   return 0;
}