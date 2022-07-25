#include<stdio.h>
int main()
{
int array[5],i,position;
for(i=0;i<5;i++)
{
scanf(" %d ",&array[i]);
}
for(i=position;i<4;i++)
{
array[i]=array[i+1];
}
for(i=0;i<4;i++)
{
printf(" %d ",array[i]);
}
}
