import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int l = Integer.parseInt(br.readLine());
        String s = br.readLine();
        System.out.println(divide(s,0,l)+1);
    }
    public static int divide(String s, int div, int l)
    {
        //check if s is good
        int one=0; int zero=0;
        for(int i=0;i<l;i++)
        {
            char c = s.charAt(i);
            if(c=='1')
            one++;
            else
            zero++;
        }
        if(one!=zero)
        return div;
        int min = l-1;
        for(int i=1; i<l;i++)
        {
            int n1 = divide(s.substring(0,i), div+1,i);
            int n2 = divide(s.substring (i),div+1,l-i);
            n1 = n1>n2 ? n1 : n2;
            min = n1<min ? n1 : min;
        }
        return min;
    }
}
