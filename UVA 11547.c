#include<stdio.h>
int main()
{
    int i,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&i);

        i = (((((i*567)/9)+7492)*235)/47)-498;

        printf("%d\n",i);

        i=i/10;
        i=i%10;

        printf("%d\n",abs(i));
    }

    return 0;
}
