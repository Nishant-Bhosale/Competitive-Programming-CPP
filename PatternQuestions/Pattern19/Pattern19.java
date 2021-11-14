package com.company;

import java.util.Scanner;

public class Pattern19 {
    public static void pattern19(){
        Scanner scn = new Scanner(System.in);

        int rows = scn.nextInt();

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows; j++){
                if(i == 1){
                    if(j == rows || j <= rows/2 + 1){
                        System.out.print("*\t");
                    }else{
                        System.out.print("\t");
                    }
                } else if(i <= rows / 2){
                    if(j == rows || j == rows/2 + 1){
                        System.out.print("*\t");
                    }else{
                        System.out.print("\t");
                    }
                }else if(i == rows / 2 + 1){
                    System.out.print("*\t");
                }else if(i < rows){
                    if(j == 1 || j == rows/2 + 1){
                        System.out.print("*\t");
                    }else{
                        System.out.print("\t");
                    }
                }else{
                    if(j == 1 || j >= rows/2 + 1){
                        System.out.print("*\t");
                    }else{
                        System.out.print("\t");
                    }
                }
            }
            System.out.println();
        }
    }
}
