package com.company;

import java.util.Scanner;

public class Pattern9 {
    public static void pattern9(){
        Scanner scn = new Scanner(System.in);
        int rows = scn.nextInt();

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j<=rows; j++){
                if(i == j || i + j == rows + 1){
                    System.out.print("*\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            
            System.out.println();
        }
    }
}
