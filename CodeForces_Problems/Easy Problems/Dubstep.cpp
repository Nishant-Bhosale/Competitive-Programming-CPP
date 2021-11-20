#include<iostream>
#include<regex>
using namespace std;

int main(){
   string wub;
   cin>>wub;
   regex p("WUB");

   cout<<regex_replace(wub,p," ");

   return 0;
}