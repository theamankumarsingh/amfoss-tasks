import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        printCrystal(n);
    }
    private static void printCrystal(int n)
    {
        int arr[][]=new int[n][n];
        //create pattern
        for(int i=0; i<n/2;i++)
        {
            for(int j=0; j<n/2-i;j++)
            {
                arr[i][j]=1;
                arr[i][n-j-1]=1;
                arr[n-i-1][j]=1;
                arr[n-i-1][n-j-1]=1;
            }
        }
        //print pattern
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                System.out.print(arr[i][j]==1 ? "*" : "D");
            System.out.println();
        }
        
    }
}
