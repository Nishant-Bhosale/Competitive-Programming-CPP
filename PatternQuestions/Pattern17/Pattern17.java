package com.company;

import java.util.Scanner;

public class Pattern17 {
    public static void pattern17(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        int spaces = rows/2;
        int stars = 1;
        for(int i = 1; i <= rows; i++){

                for (int j = 1; j <= spaces; j++) {
                    if(i == rows/2 + 1){
                        System.out.print("*\t");
                    }else{
                        System.out.print("\t");
                    }
                }

            for(int j = 1; j <= stars; j++){
                System.out.print("*\t");
            }

            if(i <= rows/2){
                stars++;
            }else{
                stars--;
            }
            System.out.println();
        }
    }
}
