package com.company;

import java.util.Scanner;

public class Pattern5 {
    public static void pattern5(){
        Scanner scn = new Scanner(System.in);

        int row = scn.nextInt();
        int spaces = row/2;
        int stars = 1;
        for(int i = 1; i <= row; i++){
            for(int k = 1; k <= spaces; k++){
                System.out.print("\t");
            }
            for(int j = 1; j <=stars; j++){
                System.out.print("*\t");
            }
            if(i <= row/2) {
                spaces--;
                stars += 2;
            }else{
                spaces++;
                stars -= 2;
            }
            System.out.println();
        }
    }
}


