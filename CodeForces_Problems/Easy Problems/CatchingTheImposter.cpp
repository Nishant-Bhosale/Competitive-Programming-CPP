#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
   int n, k;

   cin>>n>>k;

   set<int> st;
   for(int i = 0; i < k; i++){
      int x;
      cin>>x;
      st.emplace(x);
   }

   if(st.size() == n-1){
      cout<<"NO"<<endl;
   }else{
      cout<<"YES"<<endl;
   }
   return 0;
}