#include<stdio.h>
int main()
{
    int t,n,k,p,i,j;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);

        j=k+p;

        while(j>n)
        {
            j=j-n;
        }

        printf("Case %d: %d\n",i,j);
    }
    return 0;
}
