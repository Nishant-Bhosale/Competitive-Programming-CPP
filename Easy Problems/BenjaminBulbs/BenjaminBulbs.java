package com.company;

import java.util.Scanner;

public class BenjaminBulbs {
    public static void benjaminBulbs(){
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        for(int i = 0; i * i <= n; i++){
            System.out.println(i * i);
        }
    }
}
