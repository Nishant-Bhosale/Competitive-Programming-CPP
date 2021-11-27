#include<iostream>
using namespace std;
int main(){
   int t,n,v;
   string s;
   cin>>t;
   while(t--){
      cin>>n>>s;
      v=0;
      for(int i=1;i<n;i++){
         if(s[i]!=s[i-1]){
         v=1;
         cout<<i<<" "<<i+1<<"\n";
         break;
         }
      }
      if(v!=1) cout<<"-1 -1\n";
   }
   return 0; 
} 