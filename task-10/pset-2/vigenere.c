#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    //check
    if(argc!=2){
    printf("Usage: ./file word\n");
    return 1;
    }
    //check, count length as well as convert to lowercase
    int l=0;
    while(argv[1][l]!='\0')
    {
        if(!(argv[1][l]>=65 && argv[1][l]<=90 || argv[1][l]>=97 && argv[1][l]<=122))
        {
            printf("Usage: ./file word\n");
            return 1;
        }
        if(argv[1][l]>=65 && argv[1][l]<=90)
        argv[1][l]=argv[1][l]+32;
        l++;
    }
    //input
    char s[999];
    printf("plaintext:  ");
    scanf("%[^\n]%*c",s);
    //algo
    int i=0, j=0;
    for(;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]=65+(s[i]+argv[1][j]-65-97)% 26;
        else if(s[i]>=97 && s[i]<=122)
        s[i]=97+(s[i]+argv[1][j]-97-97)% 26;
        else
        continue;
        j++;
        if(j>=l)   //last 3 characters are npt required
        j=0;
    }
    //print
    printf("ciphertext: ");
    i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
    printf("\n");
    return 0;
}