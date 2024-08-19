#include<stdio.h>
void main()
{
int n,a[100],i,j,temp,time=0;
time++;
printf("enter no. of elements");
time++;
scanf("%d",&n);
time++;
printf("enter the elemnts");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
time++;
for(i=0;i<n;i++)
{
temp=a[i];
j=i-1;
time++;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("sorted list\n");
time++;
time++;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
time++;
}
printf("\n");
time++;
printf("\n space complexity=%d",(n*4)+(5*4));
time++;
printf("\n time complexity=%d",time+1);
}
