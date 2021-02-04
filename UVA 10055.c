#include<stdio.h>
int main()
{
    unsigned n,m,r;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n>m)
        {
            r = n-m;
        }
        else
        {
            r = m-n;
        }

        printf("%d\n",r);
    }
    return 0;
}
