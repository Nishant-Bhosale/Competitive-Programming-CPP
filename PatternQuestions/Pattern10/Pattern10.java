package com.company;

import java.util.Scanner;

public class Pattern10 {
    public static void pattern10(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();
        int outerSpaces = rows / 2;
        int innerSpaces = -1;

        for(int i = 1; i <= rows; i++){

            for(int j = 1; j <= outerSpaces; j++){
                System.out.print("\t");
            }

            System.out.print("*\t");

            for(int k = 1; k <= innerSpaces; k++){
                System.out.print("\t");
            }

            if(i > 1 && i < rows){
                System.out.print("*");
            }

            if(i <= rows/2){
                outerSpaces--;
                innerSpaces += 2;
            }else{
                outerSpaces++;
                innerSpaces -= 2;
            }
            System.out.println();
        }
    }
}
