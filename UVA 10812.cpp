#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,t,x,y;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a<b || (a-b)%2!=0)
        {
            cout<<"impossible"<<endl;
        }

        else
        {
            x=(a+b)/2;
            y=a-x;

            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
