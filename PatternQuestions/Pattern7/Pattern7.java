package com.company;

import java.util.Scanner;

public class Pattern7 {
    public static void pattern7(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();
        int stars = 1;
        int spaces = 0;

        for(int i = 1; i<=rows; i++){
            for(int k = 0; k < spaces; k++){
                System.out.print("\t");
            }
            for(int j = 0; j < stars; j++){
                System.out.print("*");
            }

            System.out.println();
            spaces++;
        }
    }
}
