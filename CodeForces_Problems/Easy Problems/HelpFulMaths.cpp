#include<iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
   string mathsProb;
   cin>>mathsProb;

   for(int i = 0; i < mathsProb.size(); i+=2){
      for(int j = 0; j < mathsProb.size(); j+=2){
         if(mathsProb[j] > mathsProb[i]){
            swap(mathsProb[i], mathsProb[j]);
         }
      }
   }
      cout<<mathsProb;
   return 0;
}