#include<iostream>
using namespace std;

int main(){
   int num, vec, sumx=0, sumy=0, sumz=0;
   cin>>num;
   for(int i = 0; i < num; i++){
      for(int j = 1; j <= 3; j++){
         cin>>vec;
         if(j == 1){
            sumx += vec;
         }else if(j == 2){
            sumy += vec;
         }else{
            sumz += vec;
         }
      }
   }

   if(sumx == 0 && sumy == 0 && sumz == 0){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
   return 0;
}