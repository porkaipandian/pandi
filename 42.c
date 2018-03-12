#include <stdio.h>

int main(void) {
	int a,b;
	char c[30];
	char d[20];
	scanf("%s",&c);
		scanf("%s",&d);
	a=strlen(c);
	b=strlen(d);
	if(a<b)
	{
		printf("%s",c);
	}
	else
	{
	printf("%s",d);
	}
	return 0;
}
