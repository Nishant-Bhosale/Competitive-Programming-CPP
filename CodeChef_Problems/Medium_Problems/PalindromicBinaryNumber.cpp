#include<iostream>
#include<math.h>
using namespace std;

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

int palindrome(int num){
   int reverse = 0, rem;
   while(num!=0)    
  {    
     rem=num%10;      
     reverse=reverse*10+rem;    
     num/=10;    
  }
   return reverse;
}

int main(){
   int t, n;
   cin>>t;
   for(int i = 0; i<t; i++){
      cin>>n;

         for(int j = 1; j < n; j++){
            cout<<palindrome(decimalToAnyBase(n - j, 2))<<endl;
            cout<<palindrome(decimalToAnyBase(j, 2))<<endl;
         //   if (n - j == palindrome(decimalToAnyBase(n - j, 2)) && palindrome(decimalToAnyBase(j, 2)) == j){
         //      cout<<2<<endl;
         //      cout<<j<<" "<<n - j<<endl;
         //   }else{
         //      cout<<0<<endl;
         //   }
         }
   }
   return 0;
}