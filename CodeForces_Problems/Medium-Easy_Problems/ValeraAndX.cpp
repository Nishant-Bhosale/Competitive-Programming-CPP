#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   char ch;
   string ans = "YES";
   cin>>n;
   set<char> st1, st2;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         cin>>ch;
         if(i == j || i + j == n - 1){
            st1.emplace(ch);
         }else{
            st2.emplace(ch);
         }
      }
   } 

   if(st1.size() == 1 && st2.size() == 1 && st1 != st2){
      cout<<"YES";
   }else{
      cout<<"NO";
   }

   return 0;
}