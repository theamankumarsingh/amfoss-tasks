import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int pages = Integer.parseInt(br.readLine());
        String r = br.readLine();
        String i = br.readLine();
        int[] recipe = new int[pages];
        int[] ingredient = new int[pages];
        //assigning recipe
        StringTokenizer sr = new StringTokenizer(r);
        for(int k=0; k<pages;k++)
        {
            recipe[k] = Integer.parseInt(sr.nextToken());
        }
        //assigning ingredients
        StringTokenizer si = new StringTokenizer(i);
        for(int k=0; k<pages;k++)
        {
            ingredient[k] = Integer.parseInt(si.nextToken());
        }
        //making death notes
        int deathnote = 0;
        boolean badingredient=false;
        while(true)
        {
            for(int k=0; k<pages; k++)
            {
                int x = ingredient[k] - recipe  [k];
                if(x<0)
                    badingredient=true;
                ingredient[k]=x;
            }
            if(badingredient)
                break;
            deathnote++;
        }
        //print
        System.out.println(deathnote);
    }
}
