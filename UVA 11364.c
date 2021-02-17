#include<stdio.h>
int main()
{
    int t,s,p,max,min,r;

    scanf("%d",&t);

    while(t--)
    {
        max=0;
        min=100;
        scanf("%d",&s);

        while(s--)
        {
            scanf("%d",&p);

            if(max<p)max=p;
            if(min>p)min=p;
        }

        r=(max-min)*2;
        printf("%d\n",r);
    }
    return 0;
}
