#include<stdio.h>
int main()
{
int i,j,a[10],size,temp;
printf("\n enter the size of array");
scanf("%d",&size);
printf("\n enter the elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}printf("\n elements in ascending order");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
