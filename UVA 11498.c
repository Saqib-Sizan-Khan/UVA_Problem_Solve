#include<stdio.h>
int main()
{
    int x,y,p,q,t;

    for(;;)
    {
        scanf("%d",&t);

        if(t==0)
        {
            break;
        }

        scanf("%d%d",&p,&q);
        while(t--)
        {
            scanf("%d%d",&x,&y);

            if(x>p && y>q)
            {
                printf("NE\n");
            }
            else if(x==p || y==q)
            {
                printf("divisa\n");
            }
            else if(x<p && y>q)
            {
                printf("NO\n");
            }
            else if(x<p && y<q)
            {
                printf("SO\n");
            }
            else if(x>p && y<q)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
