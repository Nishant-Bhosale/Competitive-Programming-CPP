package com.company;

import java.util.Scanner;

public class RotateNumber {
    public static void rotateNum(){
        Scanner scn = new Scanner(System.in);

        int number = scn.nextInt();
        int rotationNum = scn.nextInt();

        int temp = number;
        int length = 0;
        while(temp > 0){
            temp /= 10;
            length++;
        }

        if(rotationNum == length){
            System.out.println(number);
            return;
        }

        rotationNum = rotationNum % length;

        if(rotationNum < 0){
            rotationNum = length + rotationNum;
        }

        int multiplier = length - rotationNum;
        int tenPow = (int)Math.pow(10, rotationNum);
        int remainderMultiplier = (int)Math.pow(10, multiplier);

        int quo = number / tenPow;
        int remainder = number % tenPow;

        remainder = remainder * remainderMultiplier;
        int finalNum = remainder + quo;
        System.out.println(finalNum);
    }
}
