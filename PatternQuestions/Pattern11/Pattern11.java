package com.company;

import java.util.Scanner;

public class Pattern11 {
    public static void pattern11(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();
        int initialNum = 1;

        for(int i = 1; i<= rows; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(initialNum + "\t");
                initialNum++;
            }
            System.out.println();
        }
    }
}
