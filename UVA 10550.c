#include<stdio.h>
int main()
{
    int i,p1,p2,p3,r;

    while(scanf("%d %d %d %d",&i,&p1,&p2,&p3)==4)
    {
        if(i==0 && p1==0 && p2==0 && p3==0)
        {
            break;
        }

        r=0;

        if(i<p1)
        {
            r+=(i-p1+40)*9;
        }
        else
        {
            r+=(i-p1)*9;
        }

        if(p2<p1)
        {
            r+=(p2-p1+40)*9;
        }
        else
        {
            r+=(p2-p1)*9;
        }

        if(p2<p3)
        {
            r+=(p2-p3+40)*9;
        }
        else
        {
            r+=(p2-p3)*9;
        }
        r=r+1080;

        printf("%d\n",r);
    }

    return 0;
}
