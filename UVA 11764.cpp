#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,high,low,wall[55];

    cin>>t;

    for(int j=1; j<=t; j++)
    {
        cin>>n;
        high = 0;
        low = 0;

        for(int i=0; i<n; i++)
        {
            cin>>wall[i];
        }

        for(int i=0; i<n-1; i++)
        {
            if(wall[i] > wall[i+1])
            {
                low++;
            }
            if(wall[i] < wall[i+1])
            {
                high++;
            }
        }

        cout<<"Case "<<j<<": "<<high<<" "<<low<<endl;
    }
}
