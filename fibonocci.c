#include<stdio.h>
int main()
{
 int n1=0,n2=1,n3,i,num;
 printf("enter the num of element");
 scanf("%d",&num);
 printf("%d\t%d\t",n1,n2);
 for(i=2;i<num;i++)
 {
  n3=n1+n2;
  printf("%d\t",n3);
  n1=n2;
  n2=n3;
 }
}   

