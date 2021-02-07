#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;

    while(scanf("%lld%lld",&n,&i)==2)
    {
        printf("%d\n",n+(n-1)/(i-1));
    }
    return 0;
}
