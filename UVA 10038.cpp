#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a1[30003],a2[3005];

    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a1[i];
        }

        int k=1;
        bool jolly = true;

        for(int i=1;i<n;i++)
        {
            a2[k++] = abs(a1[i] - a1[i-1]);
        }

        sort(a2+1,a2+k);

        for(int i=1;i<k;i++)
        {
            if(a2[i] != i)
            {
                jolly = false;
                break;
            }
        }

        if(jolly)cout<<"Jolly"<<endl;

        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
