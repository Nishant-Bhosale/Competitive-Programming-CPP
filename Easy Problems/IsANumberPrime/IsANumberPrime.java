package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int t = scn.nextInt();

        for(int i=0; i < t; i++){
            int n = scn.nextInt();
            int count = 0;
            for(int div = 2; div * div <= n; div++){
                if(n % div == 0){
                    count++;
                    break;
                }
            }

            if(count == 0){
                System.out.println("Prime");
            }else{
                System.out.println("Not Prime");
            }
        }
    }
}