#include<stdio.h>
#include<string.h>

int i=1;
int main()
{
    char h[5];

    while(1)
    {
        gets(h);

        if(strcmp(h,"*")==0)
        {
            break;
        }

        else if(strcmp(h,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }

        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }

        i++;
    }
    return 0;
}
