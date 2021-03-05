#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[15];
    int x,y;

    cin>>n;

    cout<<"Lumberjacks:"<<endl;

    while(n--)
    {
        x=0,y=0;

        for(int i=0; i<10; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<9; i++)
        {
            if(a[i]>a[i+1])
            {
                x++;
            }

            else if(a[i]<a[i+1])
            {
                y++;
            }
        }

        if(x==9 || y==9)
        {
            cout<<"Ordered"<<endl;
        }

        else
        {
            cout<<"Unordered"<<endl;
        }
    }

    return 0;
}
