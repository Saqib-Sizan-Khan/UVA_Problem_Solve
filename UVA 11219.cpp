#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,age,i=1;
    int bd,bm,by,cd,cm,cy;

    cin>>t;

    while(t--)
    {
        scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);

        age = cy-by;

        if(bm>cm || (bm==cm && bd>cd))
        {
            age--;
        }

        printf("Case #%d: ",i);

        if(age<0)
        {
            printf("Invalid birth date\n");
        }
        else if(age>130)
        {
            printf("Check birth date\n");
        }
        else
        {
            printf("%d\n",age);
        }
        i++;
    }

    return 0;
}
