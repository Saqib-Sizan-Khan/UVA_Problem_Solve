#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    char i[2000];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",&i);

        l=strlen(i);

        if(strcmp(i,"78")==0 || strcmp(i,"1")==0 || strcmp(i,"4")==0)
        {
            printf("+\n");
        }

        else if(i[l-1]=='5' && i[l-2]=='3')
        {
            printf("-\n");
        }

        else if(i[0]=='9' && i[l-1]=='4')
        {
            printf("*\n");
        }

        else
        {
            printf("?\n");
        }
    }
    return 0;
}
