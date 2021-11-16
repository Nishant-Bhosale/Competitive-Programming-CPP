#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int anyBaseToDecimal(int num, int base){
   int remainder = 0;
   int calcNum = 0;
   int power = 1;

   while(num > 0){
      remainder = num % 10;
      num /= 10;
      calcNum += remainder * power;
      power = power * base;
   }
   
   return calcNum;
}

int decimalToAnyBase(int num, int base){
   int remainder = 0;
   int calcNum = 0;
   int power = 0;

   while(num > 0){
      remainder = num % base;
      
      calcNum += remainder * pow(10, power);

      num /= base;
      power++;
   }

   return calcNum;
}

int getValue(int num, int base1, int base2){
   int num1 = anyBaseToDecimal(num, base1);
   int num2 = decimalToAnyBase(num1, base2);
   cout<<num2<<endl;
   return num2;
}

int main(){
   int number, base1, base2;

   cout<<"Enter a number: "<<endl;
   cin>>number;

   cout<<"Enter base1: ";
   cin>>base1;

   cout<<"Enter base2: ";
   cin>>base2;

   getValue(number, base1, base2);
   return 0;
}



