#include<stdio.h>
int main()
{
    int b,n,i;
    int debt[20],debtor,cre,am;

    scanf("%d %d",&b,&n);

    while(b)
    {
        for(i=0; i<b; i++)
        {
            scanf("%d",&debt[i]);
        }

        while(n--)
        {
            scanf("%d %d %d",&debtor,&cre,&am);

            debt[debtor-1]-=am;
            debt[cre-1]+=am;
        }

        int result=0;

        for(i=0; i<b; i++)
        {
            if(debt[i]<0)
            {
                result=1;
            }
        }

        if(result==0)
            printf("S\n");

        else
            printf("N\n");

        scanf("%d %d",&b,&n);

    }
    return 0;
}
