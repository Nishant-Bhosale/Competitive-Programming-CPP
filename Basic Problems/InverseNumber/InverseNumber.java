package com.company;

import java.util.Scanner;
import java.lang.Math;

public class InverseOfNumber {

    public static void inverseOfNum(){
        Scanner scn = new Scanner(System.in);

        int number = scn.nextInt();

        int inverseNum = 0;
        int count = 0;
        while(number > 0){
            int digit = number % 10;
            number /= 10;
            count++;
            inverseNum += count * Math.pow(10, digit - 1);
        }
        System.out.println(inverseNum);
    }
}
