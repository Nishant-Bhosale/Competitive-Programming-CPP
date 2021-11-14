package com.company;

import java.util.Scanner;

public class Pattern14 {
    public static void pattern14(){
        Scanner scn = new Scanner(System.in);

        int number = scn.nextInt();
        for(int i = 1; i <= 10; i++){
            System.out.println(number + " * " + i + " = " + number*i);
        }
    }
}
