#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
   int n, q, p, m;

   cin>>n;

   set<int> levels;
   
   cin>>p;

   for(int i = 1; i <= p; i++){
      cin>>m;
      levels.emplace(m);
   }

   cin>>q;
   for(int i = 1; i <= q; i++){
      cin>>m;
      levels.emplace(m);
   }

   if(levels.size() != n){
      cout<<"Oh, my keyboard!";
      return 0;
   }

   int k = 1;

   cout<<"I become the guy.";
   return 0;
}