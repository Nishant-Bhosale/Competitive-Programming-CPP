#include<iostream>
using namespace std;

int main(){
   long long n, k;

   cin>>n>>k;
   n = k-++n/2;
   
   if(n > 0){
      cout<<2*n;
   }else{
      cout<<2*k-1;
   }
   return 0;
}