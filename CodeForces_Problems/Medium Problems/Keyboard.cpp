#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(){
   int t;

   cin>>t;

   for(int i = 0; i < 2*t; i++){
      string kb;
      string s;

      cin>>kb;
      cin>>s;

      int sum = 0;

      for(int j = 0; j < s.length() - 1; j++){
         sum += abs(int((kb.find(s[j]) - kb.find(s[j + 1]))));
      }

      cout<<sum<<endl;
   }

   return 0;
}