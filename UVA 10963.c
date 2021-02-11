#include<stdio.h>
int main()
{
    int t,n,y1,y2;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        scanf("%d%d",&y1,&y2);
        int d = y1-y2;
        int i,flag=0;

        for(i=1;i<n;i++)
        {
             scanf("%d%d",&y1,&y2);
             if(d != y1-y2)
             {
                 flag=1;
             }
        }

        if(flag==1)
        {
            printf("no\n");
        }

        else
        {
            printf("yes\n");
        }

        if(t)
        {
            printf("\n");
        }

    }

    return 0;
}
