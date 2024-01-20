#include<stdio.h>
void main()
{
	int i,n,a[20],b[10],k,pf=0,j,f,count=0;
	printf("enter the length of reference string:");
	scanf("%d",&n);
	printf("enter the reference string:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the frame count:");
	scanf("%d",&f);
	for(i=0;i<f;i++)
	b[i]=-1;
	printf("\n.....................................");
	printf("\n page replacement working\n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<f;k++)
		{
			if(b[k]==a[i])
				break;
		}
		if(k==f)
		{
			b[count++]=a[i];
			pf++;
		}
		for(j=0;j<f;j++)
			printf("%d\t",b[j]);
		if(k==f)
			printf("fault no: %d\t",pf);
			printf("\n");
		if(count==f)
			count=0;
	}
		printf("\n fault count= %d",pf);
	}
