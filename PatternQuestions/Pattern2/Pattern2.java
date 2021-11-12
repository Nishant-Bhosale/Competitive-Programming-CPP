package com.company;

import java.util.Scanner;

public class Pattern2 {
    public static void pattern2(){
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        for(int i = n; i > 0; i--){
            for(int j = 1; j <= i; j++){
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
