#include<stdio.h>
#include<string.h>
int main()
{
    int t,d,sum=0;
    char str[10];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",&str);

        if(strcmp(str,"donate")==0)
        {
            scanf("%d",&d);
            sum+=d;
        }

        else
        {
            printf("%d\n",sum);
        }
    }

    return 0;
}
