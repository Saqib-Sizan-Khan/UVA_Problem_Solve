#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int cnt,f;

    while(gets(str))
    {
        cnt = 0;
        f = 1;
        for(int i=0; str[i]; i++)
        {
            if((str[i] >= 'a' && str[i]<= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                if(f)
                    cnt++;

                f = 0;
            }
            else
            {
                f = 1;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
