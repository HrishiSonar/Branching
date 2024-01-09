import java.util.Scanner;

import java.lang.*;

public class arraytask1 {

    public static void main(String[] args) {
        int A[] = { 3, 9, 7, 8, 12, 6, 15, 5, 4, 10 };
        int flag = 0;

        int max, max1;

        max = max1 = A[0];
        // for (int i =0; i < A.length; i++)
        // {
        // if (max < A[i])
        // max = A[i];
        // }
        // System.out.println(max);

        for (int i = 0; i < A.length; i++) {
            if (A[i] > max) {
                max1 = max;
                max = A[i];

            } else if (A[i] > max1) {
                max1 = A[i];
            }
        }
        System.out.println("Second greatest element" + max1);

        // System.out.println("Enter the number to be searched:");
        // int num = new Scanner(System.in).nextInt();

        // for (int i = 0; i < A.length; i++){
        // if (A[i] == num) {
        // System.out.println(i);
        // flag = 1;
        // }

        // }
        // if (flag ==0)
        // System.out.println("not found");

        // int sum = 0;
        // for (int i = 0; i < A.length; i++) {
        // sum += A[i];

        // }
        // System.out.print("Sum: " + sum);

        // for (int i : A) {
        // sum += i+20;
        // }
        // System.out.print("Sum: " + sum);

    }

}
