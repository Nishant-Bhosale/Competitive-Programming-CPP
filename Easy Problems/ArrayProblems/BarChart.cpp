#include<iostream>
#include<vector>
using namespace std;

int main(){
   int inputNum, arrSize;

   cin>>inputNum;
   
   vector<int> buildingHeight;
   for (int i = 0; i < inputNum; i++){
      cin>>arrSize;
      buildingHeight.push_back(arrSize);
   }

   int maxHeight = buildingHeight[0];

   for(int i = 0; i < buildingHeight.size(); i++){
      if(maxHeight < buildingHeight[i]){
         maxHeight = buildingHeight[i];
      }
   }

   for(int floor = maxHeight; floor >= 1; floor--){
      for(int i = 0; i < buildingHeight.size(); i++){
         if(buildingHeight[i] >= floor){
            cout<<"*\t";
         }else{
            cout<<"\t";
         }
      }

      cout<<endl;
   }

   return 0;
}