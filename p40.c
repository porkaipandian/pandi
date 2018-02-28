#include <stdio.h>

int main(void) {
	int a,b=1,c=0,i,n;
	scanf("%d",&n);
            for(i=0;i<n;i++)
            {
	a=b+c;
	b=c;
	c=a;
    printf("%d ",a);
            }
	return 0;
}
