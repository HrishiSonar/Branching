import  java.lang.*;
import java.util.Scanner;

public class arraytask2 {
    public static void main(String[] args) {

        int A[]= {3,9,7,8,12,6,15,5,4,10};
        // int temp = A[0];
        // for (int i = 0; i< A.length-1; i++)
        // {
        //     A[i] = A[i+1];

        // }
        // A[A.length-1] = temp;

        int temp = A[A.length-1];

        for(int i = A.length-1  ; i>=1 ; i--)
        {
            A[i] = A[i-1] ;
        }
        A[0] = temp;
        
        for (int i : A) {
            System.out.print(i + "    ");
        }

    }
}
