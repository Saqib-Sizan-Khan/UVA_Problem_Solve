#include<stdio.h>
int main()
{
    int t,x,y,i,j=1,sum;

    scanf("%d",&t);

    while(t--)
    {
        sum=0;
        scanf("%d %d",&x,&y);

        for(i=x; i<=y; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }

        printf("Case %d: %d\n",j,sum);
        j++;
    }

    return 0;
}
