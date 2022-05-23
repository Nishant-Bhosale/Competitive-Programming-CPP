#include<PIC18F4550.h>

// Program to add 2 numbers
void main(void){
   int a, b, sum;
   TRISB = 0;
   a = 0x01;
   b = 0x03;
   sum = a + b;
   PORTB = sum;
   return;
}

// Program to add array of n numbers
void main(void){
   TRISB = 0;
   int arr[] = {1,2,3,4,5,6,7,8,9, 10};
   int sum = 0;
   for(int i = 0; i < 10; i++){
      sum = sum + arr[i];
   }
   PORTB = sum;
}

// Program for internal to internal memory transfer

void delay(int ms){
   for(int i = 0; i < 500; i++){
      for(int j = 0; j < ms; j++){

      }
   }
}

void main(void){
   TRISB = 0;
   int arr1[6] = {1, 4, 2, 9 , 10, 5};
   int arr2[6];

   for(int i = 0; i < 6; i++){
      arr2[i] = arr1[i];
   }

   for(int i = 0; i < 6; i++){
      delay(500);
      PORTB = arr2[i];  
   }
}

// Program for internal to external memory transfer

void delay(int ms){
   for(int i = 0; i < 500; i++){
      for(int j = 0; j < ms; j++){

      }
   }
}

void main(void){
   TRISB = 0;
   int arr1[7] = {10, 43, 65, 3, 1, 90, 4};
   int arr2[7] = {3, 1, 100, 43, 32, 1, 5};

   for(int i = 0; i < 7; i++){
      int temp = arr1[i];
      arr1[i] = arr2[i];
      arr2[i] = temp;
   }

   for(int i = 0; i < 7; i++){
      delay(500);
      PORTB = arr2[i];
   }
}

// Program to sort numbers in ascending and descending order

void main(void){
   TRISB = 0;
   int arr[] = {8, 4, 32, 11, 90};

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 4 - i; j++){
         if(arr[j] > arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }

   for(int i = 0; i < 5; i++){
      delay(120);
      PORTB = arr[i];
      delay(120);
   }
}

