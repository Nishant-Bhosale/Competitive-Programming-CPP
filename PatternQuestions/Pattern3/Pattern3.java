package com.company;

import java.util.Scanner;

public class Pattern3 {
    public static void pattern3(){
        Scanner scn = new Scanner(System.in);

        int row = scn.nextInt();

        int spaces = row - 1;
        int stars = 1;

        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= spaces; j++){
                System.out.print("\t");
            }
            for(int k = 1; k <=stars; k++){
                System.out.print("*\t");
            }
            System.out.println();
            spaces--;
            stars++;
        }
    }
}
