#include<stdio.h>
int main()
{
    int n,i,t,x,j=0;

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
        {
            break;
        }
        x=0;
        j++;

        for(i=0;i<n;i++)
        {
            scanf("%d",&t);

            if(t==0)
            {
                x--;
            }
            else
            {
                x++;
            }
        }

        printf("Case %d: %d\n",j,x);
    }
    return 0;
}
