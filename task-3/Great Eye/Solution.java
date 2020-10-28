import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cases=Integer.parseInt(br.readLine());
        int res[] = new int[cases];
        for(int i=0; i<cases;i++)
        {
            int k=Integer.parseInt(br.readLine());
            String s = br.readLine();
            res[i] = getASCII(s,k);
        }
        for(int i=0; i<cases; i++)
        {
            System.out.println(res[i]);
        }
        
    }
    private static int getASCII(String s, int k)
    {
        StringTokenizer sk = new StringTokenizer(s);
        String sn = "";
        int ASCII=0;
        if(sk.countTokens()-1<k)
            return -1;
        for(int i=0; i<k+1; i++)
        {
            sn=sk.nextToken();
        }
        for(int i=0; i<sn.length(); i++)
        {
            ASCII += sn.charAt(i);
        }
        return ASCII;
    }
}
