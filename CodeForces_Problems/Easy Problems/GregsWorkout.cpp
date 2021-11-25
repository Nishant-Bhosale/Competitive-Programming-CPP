#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, ex;
   cin>>n;

   int arr[4] = {0, 0, 0, 0};

   for(int i = 1; i <= n; i++){
      cin>>ex;
      if(i % 3 == 1){
         arr[1] += ex;
      }else if(i % 3 == 2){
         arr[2] += ex;
      }else{
         arr[3] += ex;
      }
   }

   int maxVal = -1;
   int idx = 0;
   for(int i = 1; i <= 4; i++){
      if(arr[i] > maxVal){
         maxVal = arr[i];
         idx = i;
      }
   }

   if(idx % 3 == 1){
      cout<<"chest";
   }else if(idx % 3 == 2){
      cout<<"biceps";
   }else{
      cout<<"back";
   }
}