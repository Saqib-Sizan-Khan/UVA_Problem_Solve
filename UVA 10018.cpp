#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,p;
        int i=0;
        cin>>s;

        while(1)
        {
            p = s;
            reverse(s.begin(),s.end());

            if(p == s)
            {
                break;
            }

            else
            {
                int r1 = stoi(p);
                int r2 = stoi(s);
                int r = r1+r2;
                s = to_string(r);
                i++;
            }
        }
        cout<<i<<" "<<s<<endl;
    }

    return 0;
}
