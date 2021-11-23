#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   for(int i = 0; i < t; i++){
      int strLen;
      cin>>strLen;

      char firstWord[strLen];
      char secondWord[strLen];

      for(int j = 0; j < strLen; j++){
         cin>>firstWord[i];
      }
      for(int j = 0; j < strLen; j++){
         cin>>secondWord[i];
      }

      int count = 0;

      for(int i = 0; i < strLen; i++){
         if(lexicographical_compare(firstWord, firstWord + strLen, secondWord, secondWord + strLen)){
            count++;
         }
      }

      cout<<count<<endl;
   }
   return 0;
}