#include<iostream>
using namespace std;

int main(){
   int n, a = 0, i, j, f[33], d[33];

   cin>>n;

   for(i = 0; i < n; i++){
      cin>>f[i]>>d[i];
   }

   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(f[i] == d[j]){
            a++;
         }
      }
   }

   cout<<a;
   return 0;
}