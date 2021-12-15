#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      vector<string> arr;
      for(int i = 0; i < n - 2; i++){
         string st;
         cin>>st;
         arr.emplace_back(st);
      }

      string ans = "";
      for(int i = 0; i < arr.size() - 1; i++){
         if(arr[i][1] != arr[i + 1][0]){
            ans += arr[i];
         }else{
            ans += (arr[i][0] + arr[i + 1][0]);
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}