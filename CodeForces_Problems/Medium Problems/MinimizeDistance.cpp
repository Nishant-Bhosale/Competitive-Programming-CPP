#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n, k;

      cin>>n>>k;

      vector<int> posArr;
      vector<int> negArr;

      for(int i = 0; i < n; i++){
         long long num;
         cin>>num;
         if(num < 0){
            negArr.emplace_back(num);
         }else{
            posArr.emplace_back(num);
         }
      }

      long long sumNeg = 0;
      if(negArr.size() > 0){
         sort(negArr.begin(), negArr.end());

         for(int i = 0; i < negArr.size(); i += k){
            sumNeg += abs(negArr[i]);
         }      
      }

      sort(posArr.begin(), posArr.end());
      long long sumPos = 0;
      if(posArr.size() > 0){
         for(int i = posArr.size() - 1; i >= 0; i -= k){
            sumPos += posArr[i];
         }
      }


      int max = -10000;

      if(negArr.size() > 0 && abs(negArr[0]) > max){
         max = abs(negArr[0]);
      }

      if(posArr.size() > 0 && posArr[posArr.size() - 1] > max){
         max = posArr[posArr.size() - 1];
      }

      cout<<(2*(sumPos + sumNeg) - max)<<endl;
   }
   return 0;
}