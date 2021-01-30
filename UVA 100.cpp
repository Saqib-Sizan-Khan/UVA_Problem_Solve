#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,m,i,j;
    int sum,ans;

    while(scanf("%d%d",&a,&b) == 2)
    {
        n=a;
        m=b;
        sum = 0;
        if(n>m)
        {
            swap(n,m);
        }

        for(i=n;i<=m;i++)
        {
            j=i;
            ans=1;
            while(j>1)
            {
                if(j%2==0)j = j/2;

                else j = 3*j+1;

                ans++;
            }

            if(ans>=sum)sum = ans;
        }

        printf("%d %d %d\n",a,b,sum);
    }
    return 0;
}
