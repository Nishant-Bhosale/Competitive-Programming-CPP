#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n;
      cin>>n;

      vector<int> arr;
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         arr.emplace_back(num);
      }

      map<int,int> freq;

      for(int i : arr){
         freq[i]++;
      }

      int maxFreq = -1;
      for(auto pairInt : freq){
         maxFreq = max(maxFreq, pairInt.second); 
      }

      if(n == 1 || maxFreq == n){
         cout<<0<<endl;
         continue;
      }else if(maxFreq == 1){
         cout<<-1<<endl;
         continue;
      }else{
         cout<<(n - maxFreq + 1)<<endl;
         continue;
      }
   }

   return 0;
}