#include<bits/stdc++.h>

using namespace std;

int main()
{
    char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char s[1000];
    int m,n,i,j;

    m=strlen(key);

    while(gets(s))
    {
        n=strlen(s);

        for(i=0; i<n; i++)
        {
            if(s[i]==' ')
                cout<<" ";

            else
            {
                for(j=0; j<m; j++)
                {
                    if(s[i]==key[j])
                    {
                        cout<<key[j-1];
                        break;
                    }
                }
            }
        }

        cout<<endl;
    }

    return 0;
}
