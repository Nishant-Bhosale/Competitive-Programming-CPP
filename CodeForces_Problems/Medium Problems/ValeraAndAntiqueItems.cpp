#include<iostream>
#include<set>
using namespace std;

int main(){
   int n, val;
   int price;
   cin>>n>>val;
   set<int> idx;

   for(int i = 1; i<=n; i++){
      int itemCnt;
      cin>>itemCnt;
      for(int j = 0; j < itemCnt; j++){
         cin>>price;
         if(val > price){
            idx.insert(i);
         }
      }
   }

   cout<<idx.size()<<endl;

   for(auto i = idx.begin(); i != idx.end(); i++){
      cout<<*i<<" ";
   }

   return 0;
}