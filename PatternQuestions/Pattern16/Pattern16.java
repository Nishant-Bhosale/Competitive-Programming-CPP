package com.company;

import java.util.Scanner;

public class Pattern16 {
    public static void pattern16(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        int spaces = 2 * rows - 3;
        int nums = 1;

        for(int i = 1; i <= rows; i++){
            int val = 1;
            for(int j = 1; j <= nums; j++){
                System.out.print(val + "\t");
                val++;
            }

            for(int j = 1; j <= spaces; j++){
                System.out.print("\t");
            }

            if(i == rows){
                nums--;
                val--;
            }

            for(int j = 1; j <= nums; j++){
                val--;
                System.out.print(val + "\t");
            }

            spaces -= 2;
            nums++;
            System.out.println();
        }
    }
}
