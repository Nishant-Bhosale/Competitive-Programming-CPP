package com.company;

import java.util.Scanner;

public class Pattern1 {
    public static void pattern1(){
        Scanner scn = new Scanner(System.in);

        int number = scn.nextInt();

        for(int i = 1;  i <= number; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
