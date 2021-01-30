#include<stdio.h>
int main()
{
    int c=0;
    char str;

    while(scanf("%c",&str)==1)
    {
        if(str=='"')
        {
            c++;
            if(c%2)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
        }

        else
        {
            printf("%c",str);
        }
    }
    return 0;
}
