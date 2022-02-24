#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n, h;
      cin>>n;
      int arr[101];
      if(n < 12){
         cout<<"no"<<endl;
      }else{
         for(int i = 0; i < n; i++){
            cin>>h;
            arr[i] = h;
         }

         
      }
   }
   return 0;
}