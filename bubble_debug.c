#include<stdio.h>
void main()
{

 int p[100], n =0,ch,j,k,l,temp;
 
 do
 {
    printf("Enter the numbers you want to sort\n");
    scanf("%d",&p[n]);
	n++;
	printf("do you want to enter next number(yes:1/No:0)\n");
	scanf("%d",&ch);
  }while(ch);
  for(j = 0; j< n; j++)
    {printf("%d \n",p[j]);}
	
	for(k =n;k>1;k--)
	{
	  for(l=0;l<k;l++)
	  {
	    if(p[l] > p[l+1])
		{
		  temp = p[l];
		  p[l] =p[l+1];
		  p[l+1] = temp;
		  }
		}
	}


printf("Array after sorting\n\n");
	for(j = 0; j< n; j++)
    printf("%d \n",p[j]);
	
}

 
