#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   int n, t;
   cin>>n;

   vector<int> vec1, vec2, vec3;

   for(int i = 0; i<n; i++){
      cin>>t;
      if(t == 1){
         vec1.push_back(i + 1);
      }else if(t == 2){
         vec2.push_back(i + 1);
      }else if(t == 3){
         vec3.push_back(i + 1);
      }
   }

   int minVal = min(vec1.size(), min(vec2.size(), vec3.size()));

   cout<<minVal<<endl;

   for(int i = 0; i < minVal; i++){
      cout<<vec1[i]<<" "<<vec2[i]<<" "<<vec3[i]<<endl;
   }

   return 0;
}