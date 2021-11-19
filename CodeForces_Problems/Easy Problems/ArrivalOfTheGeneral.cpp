#include<iostream>
using namespace std;

int main(){
   int numOfHeights, height;

   cin>>numOfHeights;

   int maxH = 0;
   int minH = 101;
   int hArr[numOfHeights];

   int maxInd, minInd;

   for(int i = 0; i < numOfHeights; i++){
      cin>>height;
      if(height > maxH){
         maxH = height;
         maxInd = i;
      }
      if(height <= minH){
         minH = height;
         minInd = i;
      }
      hArr[i] = height;
   }

   if(minInd == numOfHeights - 1 && maxInd == 0){
      cout<<0;
      return 0;
   }

   if(maxInd > minInd){
      cout<<((numOfHeights - 1 - minInd) + maxInd) - 1;
      return 0;
   }

   cout<<(numOfHeights - 1 - minInd) + maxInd;
   return 0;  
}