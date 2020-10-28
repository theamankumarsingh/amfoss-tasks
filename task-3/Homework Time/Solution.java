import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static long series[];
    public static void main(String[] args)throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int cases= Integer.parseInt(br.readLine());
        int terms[]=new int[cases];
        int maxterm=0;
        for(int i=0; i<cases; i++)
        {
            terms[i] = Integer.parseInt(br.readLine());
            maxterm=terms[i];
        }
        //find largest term
        for(int i=0; i<cases; i++)
        {
            if(terms[i]>maxterm)
                maxterm=terms[i];
        }
        createSeries(maxterm);
        //print results
        for(int i=0; i<cases; i++)
        {
            System.out.println(reverse(series[terms[i]-1]));
        }
    }
    private static void createSeries(int term)
    {
        long l=(long)Math.pow(10,9)+7;
        series=new long[term];
        for(int i=0; i<term; i++)
        {
            if(i<3)
                series[i]=i+1;
            else
                series[i]=(series[i-1]+series[i-2]+series[i-3])%l;
        }
    }
    private static long reverse(long n)
    {
        long r=0;
        while(n!=0)
        {
            r=r*10+n%10;
            n=n/10;
        }
        return r;
    }
}
