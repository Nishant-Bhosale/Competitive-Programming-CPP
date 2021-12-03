#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      int arr[2][n];
      for(int i = 0; i < 2; i++){
         for(int j = 0; j < n; j++){
            char ch;
            cin>>ch;
            arr[i][j] = ch;
         }
      }

      int ans = false;

      for(int i = 0; i < 2; i++){
         for(int j = 0; j < n; j++){
            if(i == 0){
               if(arr[i + 1][j + 1] == '1' && arr[i][j + 1] == '1'){
                  ans = true;
               }
            }else{
               if(arr[i][j + 1] == '1' && arr[i - 1][j + 1] == '1'){
                  ans = true;
               }
            }
         }
      }

      if(ans){
         cout<<"NO"<<endl;
      }else{
         cout<<"YES"<<endl;
      }
   }
   return 0;
}