#include<stdio.h>
int main()
{
    long int n,i,sum;

    while(1)
    {
        scanf("%ld",&n);

        if(n<0)
        {
            break;
        }

        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=i;
        }

        printf("%ld\n",sum+1);
    }
    return 0;
}
