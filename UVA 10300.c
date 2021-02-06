#include<stdio.h>
int main()
{
    int s,f,a,b,c,i,x;

    scanf("%d",&s);

    while(s--)
    {
        scanf("%d",&f);
        x=0;

        for(i=0;i<f;i++)
        {
            scanf("%d%d%d",&a,&b,&c);

            x+=a*c;
        }
        printf("%d\n",x);
    }
    return 0;
}
