#include<stdio.h>
int main()
{
    double H,U,D,F,s,f;
    int day;

    while(1)
    {
        scanf("%lf %lf %lf %lf",&H,&U,&D,&F);

        if(H==0)
        {
            break;
        }

        f=U*(F/100);
        s=0.0;
        day=0;

        for(;;)
        {
            day++;
            if(U>0)
            {
                s=s+U;
            }

            U=U-f;

            if(s>H)break;

            s=s-D;

            if(s<0)break;
        }

        if(s>=H)
        {
            printf("success on day %d\n",day);
        }

        else
        {
            printf("failure on day %d\n",day);
        }
    }
    return 0;
}
