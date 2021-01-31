#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000];
    int len;

    while(scanf("%s",&ch)==1)
    {
        len = strlen(ch);

        for(int i=0; i<len; i++)
        {
            cout<<char(ch[i]-7);
        }
        cout<<endl;
    }
    return 0;
}
