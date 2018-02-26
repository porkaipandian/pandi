#include<stdio.h>
#include<string.h>
int main(void)
{
    int x,y;
    int temp;
    printf("Enter the number\n");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d\n%d",x,y);
    return 0;
}
