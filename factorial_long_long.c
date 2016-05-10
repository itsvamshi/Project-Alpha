#include<stdio.h>



int  main()
{
	int a,num,i;
	long long int res=1;
	system("cls");
	printf("\nEnter the number\n");
	scanf("%d",&num);
	a=abs(num);
	for(i=a;i>0;i--)
	{
		res=res*i;
	
	}
	printf("\nfactorial of %d is \t %lld",a,res);
	return 0;
	
	
	
}
