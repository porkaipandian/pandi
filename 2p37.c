#include<stdio.h>
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int a,b;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
swap(&x,&b);
printf("after swapping a=%d and b=%d",a,b);
return 0;
}
