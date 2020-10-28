import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int cases= Integer.parseInt(br.readLine());
        long res[]= new long[cases];
        for(int i=0; i<cases; i++)
        {
            String s = br.readLine();
            String n = s.substring(0,s.indexOf(" "));
            int k = Integer.parseInt(s.substring(s.indexOf(" ")+1));
            res[i]=getMMNS(n,k);
        }
        for(int i=0; i<cases; i++)
        {
            System.out.println(res[i]);
        }
    }
    private static long getMMNS(String  n, int k)
    {
        int l=n.length();
        if(l<=k)
            return -1;
        //case 0
        long min;
        //case i
        min= Math.abs((long)n.charAt(0)-(long)n.charAt(0+k));
        loop: for(int i=1; i<l; i++)
        {
            try{
            long m= Math.abs((long)n.charAt(i)-(long)n.charAt(i+k));
                if (m<min)
                    min=m;
                }
            catch(Exception e)
            {
                break loop;
            }
        }
        return min;
    }
}
