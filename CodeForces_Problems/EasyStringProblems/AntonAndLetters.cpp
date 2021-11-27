#include<iostream>
#include<set>
using namespace std;

int main(){
   char letter;
   set<char> letters;
   while(cin>>letter){
      if(letter != '{' && letter != ',' && letter != '}'){
         letters.emplace(letter);
      }
   }

   cout<<letters.size();
   return 0;
}