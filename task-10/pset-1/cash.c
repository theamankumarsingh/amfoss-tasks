#include <stdio.h>
int main(void)
{
    float f=-1.0;
    while(f<0.0){
    printf("Change owed: ");
    scanf("%f",&f);
    }
    int c=(int)(f*100);
    int change[]={25,10,5,1};
    int n=0;
    for(int i=0; i<4; ++i)
    {
        if(c>=change[i])
        {
            c-=change[i];
            ++n;
            --i;
        }
    }
    printf("%d\n",n);
    return 0;
}
