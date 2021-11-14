package com.company;

import java.util.Scanner;

public class Pattern13 {

    public static void pattern13(){
        Scanner scn = new Scanner(System.in);

        int row = scn.nextInt();

        for(int i = 0; i < row; i++){
            int val = 1;
            for(int j = 0; j <= i; j++){
                System.out.print(val + "\t");
                val = val * (i - j) / (j + 1);
            }
            System.out.println();
        }
    }
}
