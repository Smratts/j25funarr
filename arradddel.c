
// insertion a position in array


#include<stdio.h>

int main()
{int array[5],pos,ele,i;
for(i=0;i,5;i++)
{
scanf("%d",&array[i]);
}
scanf("%d",&pos);
scanf("%d",&ele);
for(i=4;i<=pos;i--)
{
array[i+1]=array[i];
}
array[pos]=ele;
for(i=0;i<=5;i++)
{
printf("%d",array[i]);
}
}
