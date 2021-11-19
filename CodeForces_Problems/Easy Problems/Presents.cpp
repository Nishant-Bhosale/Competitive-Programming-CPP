#include<iostream>
#include<vector>
using namespace std;
int main(){
   int tests, pindex;

   cin>>tests;

   int fns[tests];
   int resArr[tests];

   for(int i = 1; i <= tests; i++){
      cin>>pindex;
      resArr[pindex] = i;
   }

   for(int i = 1; i <= tests; i++){
      cout<<resArr[i]<<" ";
   }

   return 0;
}