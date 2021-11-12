package com.company;

import java.util.Scanner;

public class Pattern8 {
    public static void pattern8(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        for(int i = 1; i<= rows; i++){
            for(int j = 1; j<= rows; j++){
                if(i + j == rows+1){
                    System.out.print("*\t");
                }else{
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}
