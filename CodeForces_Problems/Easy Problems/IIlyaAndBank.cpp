#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;

   int max = n;

   if((n / 10) > max){
      max = n / 10;
   }

   if((n % 10) + (n/100) * 10 > max){
      max = (n % 10) + (n/100) * 10;
   }

   cout<<max;
   return 0;
}