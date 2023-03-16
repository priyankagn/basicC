#include<stdio.h>
int main()
{
   int a[10],pos,i,n,value;
   printf("enter no of elements in array:");
   scanf("%d",&n);
   printf("enter %d elements are:\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that position:");
   scanf("%d",&value);
   for(i=n-1;i>pos;i--)
      a[i+1]=a[i];
   a[pos]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=n;i++)
      printf("%d\n",a[i]);
   return 0;
}
