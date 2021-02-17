#include<stdio.h>
int main()
{
    int t,p,q;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&p,&q);

        if(p>q)
        {
            printf(">\n");
        }
        else if(p==q)
        {
            printf("=\n");
        }
        else
        {
            printf("<\n");
        }
    }
    return 0;
}
