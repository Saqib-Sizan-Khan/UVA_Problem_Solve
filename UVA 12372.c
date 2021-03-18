#include<stdio.h>
int main()
{
    int t,l,w,h,i=0;

    scanf("%d",&t);

    while(t--)
    {
        i++;
        scanf("%d %d %d",&l,&w,&h);

        if(l<=20 && w<=20 && h<=20)
        {
            printf("Case %d: good\n",i);
        }

        else
        {
            printf("Case %d: bad\n",i);
        }
    }

    return 0;
}
