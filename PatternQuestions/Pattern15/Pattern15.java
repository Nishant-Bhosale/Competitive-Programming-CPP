package com.company;

import java.util.Scanner;

public class Pattern15 {
    public static void pattern15(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        int spaces = rows / 2;
        int stars = 1;
        int mainVal = 1;
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= spaces; j++){
                System.out.print("\t");
            }

            int anotherVal = mainVal;
            for(int k = 1; k <= stars; k++){
                System.out.print(anotherVal + "\t");
                if(k <= stars / 2){
                    anotherVal++;
                }else{
                    anotherVal--;
                }
            }

            if(i <= rows/2){
                spaces--;
                stars += 2;
                mainVal++;
            }else{
                stars -= 2;
                spaces++;
                mainVal--;
            }
            System.out.println();
        }
    }
}
