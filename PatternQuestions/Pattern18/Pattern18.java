package com.company;

import java.util.Scanner;

public class Pattern18 {
    public static void pattern18(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();
        int stars = rows;
        int spaces = 0;
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= spaces; j++){
                System.out.print("\t");
            }
            for(int j = 1; j <= stars; j++){
                if((i > 1 && i <= rows/2) && (j != 1 && j != stars)){
                    System.out.print("\t");
                }else{
                    System.out.print("*\t");
                }
            }
            if(i <= rows/2){
                stars -= 2;
                spaces++;
            }else{
                stars += 2;
                spaces--;
            }
            System.out.println();
        }
    }
}
