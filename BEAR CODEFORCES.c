#include<stdio.h>
int main()
{
    int lw,bw,year=0;
    scanf("%d %d",&lw,&bw);
    while(lw<=bw)
    {
        lw*=3;
        bw*=2;
        year++;
    }
    printf("%d",year);
}
