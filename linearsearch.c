  #include<stdio.h>
void main()
{
int a[100],i,x,n,count=0,time=0;
time=time+2;
printf("enter the no of elements");
time++;
scanf("%d",&n);
time++;
printf("enter the elements");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
time++;
}
time++;
printf("enter the number to be searched");
time++;
scanf("%d",&x);
time++;
for(i=0;i<n;i++)
{
time++;
if(a[i]==x)
{
printf("item is found at %d",i+1);
time++;
count++;
time++;
}}
time++;
if(count>0)
{
printf("\n number is found %d times",count);
time++;
}
else
{
printf("number is not found");
time++;
}
printf("\n space complexity=%d",(n*4)+(5*4));
time++;
printf("\n time complexity=%d",time+1);
}
