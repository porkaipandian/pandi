#include <stdio.h>
#include<math.h>
int main(void) {
int k,m;
scanf("%d %d",&k,&m);
for(int i=k;i<m;i++)
{
	int t,rem,sum=0;
	t=i;
	while(t!=0)
	{
	rem=t%10;
	sum=sum+rem*rem*rem;
	t=t/10;
	}
	if(sum==i)
	{
		printf("%d\n",sum);
		
	}
	else
	continue;
}

	return 0;
}
