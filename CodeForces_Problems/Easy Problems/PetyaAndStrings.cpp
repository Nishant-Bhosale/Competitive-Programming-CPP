#include<iostream>
#include<string.h>
using namespace std;

int main(){
   char first[101], second[101];
   cin>>first>>second;
   std::cout<<stricmp(first, second);
}