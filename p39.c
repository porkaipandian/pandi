#include <stdio.h>

int main(void) {
	int n,a[50],i,j,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	
	{
		if(a[i]>a[j])
		temp=a[i];
		a[j]=a[j];
		a[i]=temp;
	
	}
				
}	
			
	printf("%d",a[n-1]);
            		
		
	
	
	
	return 0;
}
