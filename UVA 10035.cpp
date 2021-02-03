#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    int h,cnt;

    while(scanf("%llu%llu",&n,&m)==2)
    {
        if(n==0 && m==0)break;
        h=0;
        cnt=0;

        while(n||m)
        {
            h=((n%10)+(m%10)+h)/10;
            n = n/10;
            m = m/10;

            cnt+=h;
        }

        if(cnt==0)
        {
            cout<<"No carry operation."<<endl;
        }

        else if(cnt==1)
        {
            cout<<"1 carry operation."<<endl;
        }

        else
        {
            cout<<cnt<<" carry operations."<<endl;
        }
    }
    return 0;
}
