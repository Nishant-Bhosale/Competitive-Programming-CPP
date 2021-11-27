#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      string st;
      int ac = 0, bc = 0, cc = 0;
      int res = 0;
      cin>>st;

      for(int i =0 ; i < st.size(); i++){
         if(st[i] == 'A'){
            ac++;
         }else if(st[i] == 'B'){
            bc++;
         }else if(st[i] == 'C'){
            cc++;
         }
      }

      if(bc * 2 == st.size()){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}