#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{

    if(argc!=2){
    printf("Usage: ./file k\n");
    return 1;
    }
    int k=atoi(argv[1]);
    char s[999];
    printf("plaintext:  ");
    scanf("%[^\n]%*c",s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]=65+(s[i]+k-65)% 26;
        if(s[i]>=97 && s[i]<=122)
        s[i]=97+(s[i]+k-97)% 26;
        i++;
    }
    i=0;
    printf("ciphertext: ");
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
    printf("\n");

    return 0;
}