#include<stdio.h>
int main()
{
    int p,b,h,w,pri,wb,i,j,result,cost;

    while((scanf("%d %d %d %d",&p,&b,&h,&w))==4)
    {
        cost=600000;
        for(i=0; i<h; i++)
        {
            scanf("%d",&pri);

            for(j=0; j<w; j++)
            {
                scanf("%d",&wb);

                result=0;
                if(wb>=p)
                {
                    result=pri*p;
                    if(cost>result)
                    {
                        cost=result;
                    }
                }
            }
        }
        if(cost<=b)
        {
            printf("%d\n",cost);
        }
        else
        {
            printf("stay home\n");
        }
    }
    return 0;
}
