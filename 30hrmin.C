#include<stdio.h>
int main
{
int hr1,hr2,mn1,mi2,a,b;
printf("\n enter the 1st timing");
scanf("%d %d",&hr1,min1);
printf("\n enter the 2nd timing");
scanf("%d %d",&hr2,&min2);
a=hr1-hr2;
b=min1-min2;
printf("\n the diff is hr:min is %d :%d",a,b);
return 0;
}
