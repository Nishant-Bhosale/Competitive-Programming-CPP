#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void decimalToAnyBase(int, int);

int main(){
   int number, base;

   cout<<"Enter a number: "<<endl;
   cin>>number;

   cout<<"Enter base: ";
   cin>>base;

   decimalToAnyBase(number, base);
   return 0;
}

void decimalToAnyBase(int num, int base){
   int remainder = 0;

   int calcNum = 0;
   int power = 0;
   while(num > 0){
      remainder = num % base;
      
      calcNum += remainder * pow(10, power);

      num /= base;
      power++;
   }

   cout<<calcNum<<endl;
}