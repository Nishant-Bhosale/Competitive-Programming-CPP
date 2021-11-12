package com.company;

import java.util.Scanner;

public class Pattern4 {

    public static void pattern4() {
        Scanner scn = new Scanner(System.in);

        int row = scn.nextInt();

        int spaces = 0;
        int stars = row;
        for (int i = 1; i <= row; i++) {
            for(int k = 1; k <= spaces; k++){
                System.out.print("\t");
            }
            for(int j = 1; j <= stars; j++){
                System.out.print("*\t");
            }
            System.out.println();
            spaces++;
            stars--;
        }
    }
}
