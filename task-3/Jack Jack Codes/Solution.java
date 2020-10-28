import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String s1=br.readLine();
        StringTokenizer st = new StringTokenizer(s1);
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        String s2=br.readLine();
        int arr[]=new int[N];
        st= new StringTokenizer(s2);
        for(int i=0;i<N;i++)
        {
            arr[i]=Integer.parseInt(st.nextToken());
        }
        //solve problem
        System.out.println(problem(arr,N,M));
    
    }
    private static String problem(int arr[],int N, int M)
    {
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
            {
                if(arr[j]+arr[i]==M)
                    return "True";
            }
        return "False";
    }
}
