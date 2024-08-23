#include<stdio.h>
void main()
{
int n,search,count=0,t=0,r,l,mid,flag,i,a[100],time=0;
time=time+2;
printf("enter no. of elements");
time++;
scanf("%d",&n);
time++;
printf("enter the elements");
time++;
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
printf("enter no.to be searched");
time++;
scanf ("%d",&search);
time++;
l=0;
r=n-1;
time++;
while(l<=r)
{
mid=(l+r)/2;
time++;
if(search==a[mid])
{
flag=1;
break;
}
else if(search>a[mid])
{
l=mid+1;
}
else if(search<a[mid])
{
r=mid-1;
}}
time++;
if(flag==0)
{
printf("not found");
time++;
}
else
{
printf("element found at position %d",mid+1);
time++;
}
printf("\n space complexity=%d",(n*4)+(10*4));
time++;
printf("\n time complexity=%d",time+1);
}
