#include <stdio.h>

int main(void) {
	int a,b,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		count++;
		a=a/10;
	}
	printf("%d",count++);
	
	return 0;
}
