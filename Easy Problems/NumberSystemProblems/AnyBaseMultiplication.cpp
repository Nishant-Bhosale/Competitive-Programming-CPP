#include<iostream>
using namespace std;

int getProductWithSingleDigit(int base, int num1, int d2){
   int rv = 0;
   int carry = 0;
   int power = 1;

   while(num1 > 0 || carry > 0){
      int d1 = num1 % 10;
      num1 /= 10;

      int d = d1 * d2 + carry;
      carry = d / base;
      d = d % base;

      rv = rv + d * power;
      power *= 10;
   }

   return rv;
}

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

int getProduct(int num1, int num2, int base){
   int rv = 0;
   int power = 1;

   while(num2 > 0){
      int d2 = num2 % 10;
      num2 /= 10;

      int multipliedNum = getProductWithSingleDigit(base, num1, d2);

      rv = anyBaseAddition(multipliedNum * power, rv, base);

      power = power * 10;
   }

   return rv;
}

int main(){
   int num1, num2, base;

   cin>>num1>>num2>>base;

   int prod = getProduct(num1, num2, base);

   cout<<prod;
   return 0;
}