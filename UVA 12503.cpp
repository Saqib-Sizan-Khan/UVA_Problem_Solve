#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string cmd[105];
    cin>>t;

    while(t--)
    {
        int c,p=0;
        cin>>c;

        for(int i=1; i <= c; i++)
        {
            string str1,str2;
            int op;

            cin>>str1;

            if(str1 == "LEFT")
            {
                cmd[i] = str1;
                p--;
            }
            else if(str1 == "RIGHT")
            {
                cmd[i] = str1;
                p++;
            }
            else
            {
                cin>>str2>>op;

                cmd[i] = cmd[op];
                if(cmd[op] == "LEFT")p--;
                else p++;
            }
        }
        cout<<p<<endl;
    }

    return 0;
}
