#include<stdio.h>
int main()
{
    while(1)
    {
        int n,sum=0,m;
        scanf("%d",&n);

        if(n==0)
        {
            break;
        }

        while(1)
        {
            while(n!=0)
            {
                m = n%10;
                sum+=m;
                n = n/10;
            }

            if(sum/10==0)
            {
                break;
            }
            else
            {
                n=sum;
                sum=0;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
