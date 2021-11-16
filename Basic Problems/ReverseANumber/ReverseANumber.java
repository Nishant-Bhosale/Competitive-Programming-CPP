package com.company;

import java.util.Scanner;

public class ReverseNumber {
    public static void reverseNum(){
        Scanner scn = new Scanner(System.in);

        int number = scn.nextInt();

        while(number > 0){
            int digit = number % 10;
            number /= 10;
            System.out.println(digit);
        }
    }
}
