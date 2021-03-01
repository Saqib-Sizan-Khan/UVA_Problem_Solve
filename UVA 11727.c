#include<stdio.h>

int main()
{
    int n,a,b,c,i=1;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a>c && b<c || a<c && b>c)
        {
            printf("Case %d: %d\n",i,c);
        }
        else if(a>b && c<b || a<b && c>b)
        {
            printf("Case %d: %d\n",i,b);
        }
        else
        {
            printf("Case %d: %d\n",i,a);
        }
        i++;
    }
    return 0;
}
