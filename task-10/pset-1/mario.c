#include <stdio.h>
int main(void)
{
    int n=-1;
    while(n>23 || n<0)
    {
        scanf("%d",&n);
    }
    for(int i=1; i<n+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(j<n-i)
            printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
