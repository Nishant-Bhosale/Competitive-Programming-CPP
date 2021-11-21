#include<iostream>
using namespace std;

int main(){
   int n, m;

   cin>>n>>m;
   
   if(n<m){
      cout<<-1;
      return 0;
   }else{
      n = (n+1)/2;
      cout<<n + (m - n%m) % m;
   }
   return 0;
}