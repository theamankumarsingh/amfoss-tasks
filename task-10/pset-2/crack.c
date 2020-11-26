#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char tochar(int n)
{
    char letter[]="\0ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    return letter[n];
}
int main(int argc, char* argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./file hash\n");
        return 1;
    }
    //getting length
    int l=0;
    while(argv[1][l]!='\0')
    l++;
    //creating hash and seed
    char hash[l+1];
    for(int i=0; i<l; i++){
    hash[i]=argv[1][i];
    }
    hash[l]='\0';
    char seed[]={hash[0],hash[1],'\0'};
    //crack it!
    int c=0;
    int pass[]={1,0,0,0,0};
    while(!c)
    {
        c=1;
        char s[6];
        s[0]=tochar(pass[0]);
        s[1]=tochar(pass[1]);
        s[2]=tochar(pass[2]);
        s[3]=tochar(pass[3]);
        s[4]=tochar(pass[4]);
        s[5]='\0';
        //check
        if(strcmp(crypt(s,seed),hash)==0)
        {
            printf("%s\n",s);
            return 0;
        }
        //generate new password
        for(int i=0; i<5; i++)
        {
            if(c!=0)
            {
                pass[i]=pass[i]+c;
                c=0;
                if(pass[i]>52)
                {
                    pass[i]=1;
                    c=1;
                }
            }
        }
    }
    return 0;
}