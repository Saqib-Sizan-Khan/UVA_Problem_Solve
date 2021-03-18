#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    int x,y,z;

    while(scanf("%d %d",&a,&b)==2 && (a != -1 && b != -1))
    {
        x = abs(a-b);

        if(x>50)
        {
            x = 100-x;
        }

        cout<<x<<endl;
    }

    return 0;
}
