#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,age[15];

    cin>>t;

    for(int j=1; j<=t; j++)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>age[i];
        }

        m = n/2;

        cout<<"Case "<<j<<": "<<age[m]<<endl;
    }
    return 0;
}
