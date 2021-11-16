package com.company;

import java.util.Scanner;

public class GCDandLCM {
    public static void findLCMandGCD(){
        Scanner scn = new Scanner(System.in);
        int num1 = scn.nextInt();
        int num2 = scn.nextInt();

        int temp1 = num1;
        int temp2 = num2;

        while(temp1 % temp2 != 0){
         int remainder = temp1 % temp2;
            temp2 = temp1;
            temp1 = remainder;
        }
        int gcd = temp2;
        System.out.println(gcd);
        int lcm = (num1 * num2) / gcd;
        System.out.println(lcm);
    }
}
