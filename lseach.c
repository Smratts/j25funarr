#include<stdio.h>
#include<stdlib.h>
main()
{
int a[5]={10,20,30,40,50};
int i,key,flag=0;
printf("enter search key element");
scanf("%d",&key);
for(i=0;i<5;i++)
{
if key==a[i];
{
flag=1;
break;
}
}
if(falg==1)
printf("key is found");
else
printf("key is not found");
}
