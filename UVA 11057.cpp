#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    while(cin>>t)
    {
        int arr[t],p,n,m;
        bool flag = false;

        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
        }

        cin>>p;

        sort(arr,arr+t);

        int i=0,j=t-1;

        while(i<j)
        {
            if(arr[i]+arr[j] < p)i++;

            else if(arr[i]+arr[j] == p)
            {
                n = i;
                m = j;
                i++;
                j--;
            }

            else j--;
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n",arr[n],arr[m]);
    }
    return 0;
}

