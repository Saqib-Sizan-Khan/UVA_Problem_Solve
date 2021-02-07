#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[1002],i,j,r;

    while(scanf("%d",&n) != EOF)
    {
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        r=0;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i] > arr[j])
                    r++;
            }
        }

        cout<<"Minimum exchange operations : "<<r<<endl;
    }

    return 0;
}
