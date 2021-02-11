#include<stdio.h>
int main()
{
    int t,n,m,r=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        r=(n/3)*(m/3);

        printf("%d\n",r);
    }

    return 0;
}
