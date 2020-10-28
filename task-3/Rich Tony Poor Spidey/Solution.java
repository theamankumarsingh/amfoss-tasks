import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int cases=Integer.parseInt(br.readLine());
        Long res[]=new Long[cases];
        for(int i=0; i<cases; i++)
        {
            StringTokenizer st=new StringTokenizer(br.readLine());
            int N=Integer.parseInt(st.nextToken());
            int K=Integer.parseInt(st.nextToken());
            st=new StringTokenizer(br.readLine());
            long prod=1;
            long max;
            //iteration 0
            max=Long.parseLong(st.nextToken());
            prod=prod*max;
            //iteration j
            for(int j=1;j<N;j++)
            {
                long l=Long.parseLong(st.nextToken());
                if(l>max)
                    max=l;
                prod=prod*l;
            }
            //compute max product
            prod=prod/max;
            max=max-K;
            prod=prod*max;
            //store result
            res[i]=prod;
        }
        for(int i=0; i<cases; i++)
        {
            System.out.println(res[i]);
        }
    }
}
