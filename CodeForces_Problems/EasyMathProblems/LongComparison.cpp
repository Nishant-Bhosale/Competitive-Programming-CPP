#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      string a,b;
      int e1, e2;

      cin>>a>>e1;
      cin>>b>>e2;

      while(a.length() > 0 && a.back() == '0'){
         a.pop_back();
         e1++;
      }
      while(b.length() > 0 && b.back() == '0'){
         b.pop_back();
         e2++;
      }

      if(a.length() + e1 < b.length() + e2){
         cout<<"<"<<endl;
      }else if(a.length() + e1 > b.length() + e2){
        cout<<">"<<endl;
      }else{
        if(a > b){
           cout<<">"<<endl;
        }else if(b > a){
           cout<<"<"<<endl;
        }else{
           cout<<"="<<endl;
        }
      }
   }

   return 0;
}