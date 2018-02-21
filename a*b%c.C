#include<stdio.h>
int main()
{
int a,b,c,s=0;
printf("\n enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
s=(a*b)%c;
printf("%d",s);
return 0;
}
