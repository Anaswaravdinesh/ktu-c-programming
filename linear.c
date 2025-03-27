#include <stdio.h>
void main()
{
int n,i, A[20],pos,key;
printf("Enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the number");
scanf("%d",&A[i]);
}
printf("enter the number to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if (A[i]==key)
{
pos=i;
break;
}
}
if (pos==-1)
{
printf("element not found");
}
else
{
printf("element found at index %d",pos);
}
}
