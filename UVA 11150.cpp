#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,p=0,sum=0;

    while(scanf("%d",&n) == 1)
    {
        sum = n;

        while(n>=3)
        {
            sum += n/3;
            n = n/3 + n%3;
        }

        if(n==2)
            sum++;

        cout<<sum<<endl;
    }

    return 0;
}
