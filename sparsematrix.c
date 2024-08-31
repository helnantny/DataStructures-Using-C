#include<stdio.h>
void main()
{
int sparse[20][20],i,j,k=1,b[20][3],r,c;
printf("enter the order of matrix");
scanf("%d%d",&r,&c);
printf("enter the elements of the matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&sparse[i][j]);
}}
b[0][0]=r;
b[0][1]=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(sparse[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=sparse[i][j];
k++;
}}}
b[0][2]=k-1;
printf("sparse matrix representation is\n");
for(i=0;i<k;i++)
{
printf("\n%d\t%d\t%d",b[i][0],b[i][1],b[i][2]);
}}
