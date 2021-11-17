#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void anyBaseToDecimal(int, int);

int main(){
   int number, base;

   cout<<"Enter a number: "<<endl;
   cin>>number;

   cout<<"Enter base: ";
   cin>>base;

   anyBaseToDecimal(number, base);
   return 0;
}

void anyBaseToDecimal(int num, int base){
   int remainder = 0;
   int calcNum = 0;
   int power = 0;

   while(num > 0){
      remainder = num % 10;
      calcNum += remainder * pow(base, power);
      num /= 10;
      power++;
   }

   cout<<calcNum<<endl;
}