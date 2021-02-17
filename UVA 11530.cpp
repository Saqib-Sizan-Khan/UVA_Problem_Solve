#include<bits/stdc++.h>

using namespace std;

int main()
{
    char p1[] = "adgjmptw";
    char p2[] = "behknqux";
    char p3[] = "cfilorvy";
    char p4[] = "sz";
    char text[107],e;

    int t,len,i,j,c,a;

    scanf("%d%c",&t,&e);

    for(c=1; c<=t; c++)
    {
        a=0;
        gets(text);

        for(i=0; i<=strlen(text); i++)
        {

            if(text[i]==' ')
            {
                a+=1;
            }

            for(j=0; j<strlen(p1); j++)
            {
                if(text[i]==p1[j])
                {
                    a+=1;
                }

                else if(text[i]==p2[j])
                {
                    a+=2;
                }

                else if(text[i]==p3[j])
                {
                    a+=3;
                }
            }

            for(j=0; j<strlen(p4); j++)
            {
                if(text[i]==p4[j])
                {
                    a+=4;
                }
            }
        }

        printf("Case #%d: %d\n",c,a);
    }

    return 0;
}
