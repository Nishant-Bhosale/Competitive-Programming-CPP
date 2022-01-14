// #include<iostream>
// #include <bits/stdc++.h>
// #include<string>
// using namespace std;

// int main(){
//    int t;

//    cin>>t;

//    for(int i = 0; i < 2*t; i++){
//       string kb;
//       string s;

//       cin>>kb;
//       cin>>s;

//       int sum = 0;

//       for(int j = 0; j < s.length() - 1; j++){
         // sum += abs(int((kb.find(s[j]) - kb.find(s[j + 1]))));
//       }

//       cout<<sum<<endl;
//    }

//    return 0;
// }

#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   for(int i = 0; i < t; i++){
      string keyb;
      string s;

      cin>>keyb>>s;

      int sum = 0;
      for(int i = 0; i < s.length() - 1; i++){
         sum += abs(int((keyb.find(s[i]) - keyb.find(s[i + 1]))));
      }
      cout<<sum<<endl;
   }
   return 0;
}