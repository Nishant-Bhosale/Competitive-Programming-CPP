#include<iostream>
using namespace std;

int anyBaseAddition(int num1, int num2, int base){
   int finalNum = 0;
   int carry = 0;
   int power = 1;
   while(num1 > 0 || num2 > 0 || carry > 0){
      int rem1 = num1 % 10;
      int rem2 = num2 % 10;
      num1 /= 10;
      num2 /= 10;

      int addedNum = rem1 + rem2 + carry;
      
      carry = addedNum / base;
      addedNum =  addedNum % base;

      finalNum += addedNum * power;
      power *= 10;
   }
   return finalNum;
}

int main(){
   int num1, num2, base;

   cin>>num1>>num2>>base;

   cout<<anyBaseAddition(num1, num2,base)<<endl;
   return 0;
}