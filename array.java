import java.util.Scanner;
import java.lang.*;

public class array {
    public static void main(String[] args) {
        int A[] = new int[5];
        int B[] = { 2, 1, 4, 9, 12 };

        for (int i = 0; i < A.length; i++) {
            System.out.print(A[i] + "  ");

        }
        System.out.println();

        for (int i = 0; i < B.length; i++) {
            System.out.print(B[i] + " ");
        }

        int[] C;
        C = new int[10];

        for (int i = 0; i < C.length; i++) {
        C[i] = i;
        }
        for (int i : C) {
            
            System.out.print(C[i]++ + " ");
        }
        
    }

}
