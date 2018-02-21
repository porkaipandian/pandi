#include <stdio.h>

int main(void) {
	char ch[50];
	int count=0,i;
	scanf("%[^\n]s",&ch);
	for(i=0;ch[i]!='\0';i++)
{
	if(ch[i]==' ')
	{
		count=count+1;
	}
		
		
		
	}
		printf("%d",count);

		return 0;
}

