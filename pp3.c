#include<stdio.h>
void main()
{
int i,j,l,n=1;
printf("enter number of lines:");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",n);
n++;
}
printf("\n");
}
}

