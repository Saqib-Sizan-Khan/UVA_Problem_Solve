#include<stdio.h>
int main()
{
    int t,n,i,j,s,result;

    scanf("%d",&t);

    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        result=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&s);

            if(s>result)
            {
                result=s;
            }
        }

        printf("Case %d: %d\n",j,result);
    }

    return 0;
}
