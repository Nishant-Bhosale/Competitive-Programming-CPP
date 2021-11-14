package com.company;

import java.util.Scanner;

public class Pattern12 {
    public static void pattern12(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        int a = 0;
        int b = 1;
        int c = 0;
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(a + "\t");
                c = a + b;
                a = b;
                b = c;
            }
            System.out.println();
        }
    }
}
