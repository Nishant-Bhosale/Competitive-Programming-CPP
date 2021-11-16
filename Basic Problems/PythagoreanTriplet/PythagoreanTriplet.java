package com.company;

import java.util.Scanner;

public class PythagoreanTriplet {

    public static void pythagoreanTriplet(){
        Scanner scn = new Scanner(System.in);
        int num1 = scn.nextInt();
        int num2 = scn.nextInt();
        int num3 = scn.nextInt();

        int maxNum = num1;

        if(num2 > maxNum){
            maxNum = num2;
        }
        if(num3 > maxNum){
            maxNum = num3;
        }

        if(maxNum == num1){
            System.out.println(maxNum * maxNum == (num2 * num2 + num3 * num3));
        }else if(maxNum == num2){
            System.out.println(maxNum * maxNum == (num1 * num1 + num3 * num3));
        }else{
            System.out.println(maxNum * maxNum == (num2 * num2 + num1 * num1));
        }
    }
}
