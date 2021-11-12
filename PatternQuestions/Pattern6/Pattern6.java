package com.company;

import java.util.Scanner;

public class Pattern6 {
    public static void pattern6(){
        Scanner scn = new Scanner(System.in);

        int row = scn.nextInt();

        int stars = row/2 + 1;
        int spaces = 1;

        for(int i = 1; i <= row; i++){
            for(int j = 1; j <=stars; j++){
                System.out.print("*\t");
            }
            for(int k = 1; k <= spaces; k++){
                System.out.print("\t");
            }
            for(int l = 1; l <=stars; l++){
                System.out.print("*\t");
            }

            if(i <= row/2){
                spaces+=2;
                stars--;
            }else{
                spaces-=2;
                stars++;
            }
            System.out.println();
        }
    }
}
