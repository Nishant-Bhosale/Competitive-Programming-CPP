#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int l,r;
      cin>>l>>r;

      int maxVal = 0;
      // for(int i = r; i >=l; i--){
      //    for(int j = l; j > 0; j--){
      //       if(i > l && i > j && i < r && j >= l && j < r){
      //          if(maxVal < i % j){
      //             maxVal = i % j;
      //          }
      //       }
      //    }
      // }

      for(int i = r; i >= l; i--){
         for(int j = l; j > r; j++){
            if(maxVal < i % j){
               maxVal = i % j;
            }
         }
      }

      cout<<maxVal<<endl;
   }
   return 0;
}