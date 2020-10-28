import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cases=Integer.parseInt(br.readLine());
        int res[]=new int[cases];
        for(int i=0; i<cases; i++)
        {
            StringTokenizer st= new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());
            st= new StringTokenizer(br.readLine());
            StringTokenizer stc= new StringTokenizer(br.readLine());
            int[][] box = new int[M][2];
            for(int j=0; j<M; j++)
            {
                box[j][0]=Integer.parseInt(st.nextToken());
                box[j][1]=Integer.parseInt(stc.nextToken())-box[j][0];
            }
            res[i]=canProtect(box,K,M);
        }
        for(int i=0; i<cases; i++)
        {
            System.out.println(res[i]==1?"YES":"NO");
        }
    }
    private static int canProtect(int[][]box, int K, int M)
    {
        quicksort(box,0,M-1,1);
        int sum=0;
        for(int i=0; i<M; i++)
        {
            if(i<K)
                sum=sum+box[i][1];
            else
                sum=sum-box[i][0];
        }
        if(sum<0)
            return 0;
        return 1;
    }
    private static void quicksort(int[][]arr, int i, int e, int c)
    {
        //sorts with respect to cth column
        //uses quicksort
        if(i<e)
        {
            int p = partition(arr, i, e, c);
            quicksort(arr,i,p,c);
            quicksort(arr,p+1,e,c);
        }
    }
    private static int partition(int[][]arr, int i, int e, int c)
    {
        int p = arr[i][c];
        int l=i;
        int m=e;
        while(true){
            while(arr[l][c]>p){
                l++;
            }
            while(arr[m][c]<p){
                m--;
            }
            if(l<m){
                //swap
                for(int q=0;q<2;q++){
                arr[l][q]=arr[l][q]+arr[m][q];
                arr[m][q]=arr[l][q]-arr[m][q];
                arr[l][q]=arr[l][q]-arr[m][q];
                }
                l++;
                m--;
            }
            else
                return m;
        }
    }
}
