#include<stdio.h>
int main()
{
    int x,y,z;
    x=0;
    y=1;
    while(x<255)
    {
            printf("%d\n",x);
            z=x+y;
            x=y;
            y=z;


    }
    return 0;
}
