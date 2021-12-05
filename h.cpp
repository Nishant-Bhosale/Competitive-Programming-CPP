#include<iostream>
using namespace std;

int maxRepeating(string& st, char ch){
   int len = st.length();
   int mainCnt = 0;
   int cnt = 1;
   for(int i = 0; i < len; i++){
      if(st[i] == ch){
         if(i < len - 1 && st[i] == st[i + 1]){
            cnt++;
         }else{
            if(cnt > mainCnt){
               mainCnt = cnt;
            }
            cnt = 1;
         } 
      }
   }

   return mainCnt;
}

int main(){
   int t;

   cin>>t;

   while(t--){
      string s;

      cin>>s;

      cout<<(maxRepeating(s, '1') + maxRepeating(s, '0'))<<endl;

   }
   return 0;
}