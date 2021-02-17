#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int t,a,i,j;
    stack<long int>st;

    while(scanf("%ld",&t)==1)
    {
        if(t<0)
            break;

        for(i=0 ;; i++)
        {
            a=t%3;
            t/=3;

            st.push(a);

            if(t==0)break;
        }

        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }

        cout<<endl;
    }

    return 0;
}
