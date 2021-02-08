#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[1003];

    cin>>t;

    while(t--)
    {
        float avg = 0.0,avg2 = 0.0;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            avg += arr[i];
        }

        avg = avg/n;

        for(int i=0;i<n;i++)
        {
            if(arr[i] > avg)
            {
                avg2 += 100;
            }
        }

        printf("%.3f%\n",avg2/n);

    }
    return 0;
}
