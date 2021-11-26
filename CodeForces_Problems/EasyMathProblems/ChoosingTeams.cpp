#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
   int n, k;
   cin>>n>>k;
   vector<int> part;
   for(int i = 0; i<n; i++){
      int num;
      cin>>num;

      part.push_back(num);
   }

   sort(part.begin(), part.end());

   int count = 0;

   for(int i = 0; i < n; i++){
      if(5 - part[i] >= k){
         count++;
      }
   }

   cout<<count/3;
   return 0;
}